#include "HCSR04.h"
// #include <IRremote.hpp>
#include <SPI.h>
// #include <MFRC522.h>
#include "Wire.h"  // This library allows you to communicate with I2C devices.
#include "DFRobotIRPosition.h"
#include "RFID.h"
#include "Arduino.h"
#include "SamcoBeta.h"

#if 0
#define LED2_AIMING
#else
#define LED4_AIMING
#endif

// #define DEBUG


/*************************
  Accel Gyro Sensor
*************************/

const int MPU_ADDR = 0x68;                                          // I2C address of the MPU-6050. If AD0 pin is set to HIGH, the I2C address will be 0x69.
int accelerometer_x = 0, accelerometer_y = 0, accelerometer_z = 0;  // variables for accelerometer raw data
int gyro_x = 0, gyro_y = 0, gyro_z = 0;                             // variables for gyro raw data
int temperature = 0;
int isStarted = 0;  // variables for temperature data

char tmp_str[7];  // temporary variable used in convert function

char* convert_int16_to_str(int16_t i) {  // converts int16 to string. Moreover, resulting strings will have the same length in the debug monitor.
  sprintf(tmp_str, "%6d", i);
  return tmp_str;
}
void setupAccelGyroSensor() {
  Wire.begin();
  Wire.beginTransmission(MPU_ADDR);  // Begins a transmission to the I2C slave (GY-521 board)
  Wire.write(0x6B);                  // PWR_MGMT_1 register
  Wire.write(0);                     // set to zero (wakes up the MPU-6050)
  Wire.endTransmission(true);
}
void doAccelGyroSensor() {
  Wire.beginTransmission(MPU_ADDR);
  Wire.write(0x3B);                         // starting with register 0x3B (ACCEL_XOUT_H) [MPU-6000 and MPU-6050 Register Map and Descriptions Revision 4.2, p.40]
  Wire.endTransmission(false);              // the parameter indicates that the Arduino will send a restart. As a result, the connection is kept active.
  Wire.requestFrom(MPU_ADDR, 7 * 2, true);  // request a total of 7*2=14 registers

  // "Wire.read()<<8 | Wire.read();" means two registers are read and stored in the same variable
  accelerometer_x = Wire.read() << 8 | Wire.read();  // reading registers: 0x3B (ACCEL_XOUT_H) and 0x3C (ACCEL_XOUT_L)
  accelerometer_y = Wire.read() << 8 | Wire.read();  // reading registers: 0x3D (ACCEL_YOUT_H) and 0x3E (ACCEL_YOUT_L)
  accelerometer_z = Wire.read() << 8 | Wire.read();  // reading registers: 0x3F (ACCEL_ZOUT_H) and 0x40 (ACCEL_ZOUT_L)
  temperature = Wire.read() << 8 | Wire.read();      // reading registers: 0x41 (TEMP_OUT_H) and 0x42 (TEMP_OUT_L)
  gyro_x = Wire.read() << 8 | Wire.read();           // reading registers: 0x43 (GYRO_XOUT_H) and 0x44 (GYRO_XOUT_L)
  gyro_y = Wire.read() << 8 | Wire.read();           // reading registers: 0x45 (GYRO_YOUT_H) and 0x46 (GYRO_YOUT_L)
  gyro_z = Wire.read() << 8 | Wire.read();           // reading registers: 0x47 (GYRO_ZOUT_H) and 0x48 (GYRO_ZOUT_L)

  // Data Output Format:
  // ax,ay,az,gx,gy,gz__
  // ToDoAppend Additional Data here
  String data = "|";
  data += (accelerometer_x);
  data += ",";
  data += (accelerometer_y);
  data += ",";
  data += (accelerometer_z);
  data += ",";
  data += (gyro_x);
  data += ",";
  data += (gyro_y);
  data += ",";
  data += (gyro_z);
  data += ("_");
  // Serial.println("S");
  Serial.print(data);
}

/*************************
  RFID Sensor
*************************/
int RFID_PIN_RST = 0;
int RFID_PIN_SDA = 10;

bool cardDetected = "";

RFID rfid(RFID_PIN_SDA, RFID_PIN_RST);

// MFRC522 mfrc522(SS_PIN, RST_PIN);  // Create MFRC522 instance
void setupRFID() {
  //   SPI.begin();                        // Init SPI bus
  //   mfrc522.PCD_Init();                 // Init MFRC522
  //   delay(4);                           // Optional delay. Some board do need more time after init to be ready, see Readme
  //   mfrc522.PCD_DumpVersionToSerial();  // Show details of PCD - MFRC522 Card Reader details
  // Serial.println(F("Scan PICC to see UID, SAK, type, and data blocks..."));

  rfid.init();
}

void doRFID() {
  bool newState = rfid.isCard();

  // Serial.print(newState);
  // Serial.print(", ");
  // Serial.print(cardDetected);
  // Serial.print(", ");
  if (cardDetected != newState) {
    cardDetected = newState;
    Serial.print("/");
    Serial.print(cardDetected);
    Serial.print("_");
  }
  rfid.halt();
}


/*************************
  Cup Sensor
*************************/

int cupState = -1;
int _cupLightPin = 23;

void setupCupSensor() {
  pinMode(_cupLightPin, INPUT);
}

void doCupSensor() {
  int val = analogRead(_cupLightPin);
  int newCupState = val < 500 ? 1 : 0;
  if (newCupState != cupState) {
    cupState = newCupState;
    Serial.print("/");
    Serial.print(cupState);
    Serial.print("_");
  }
}


/*************************
  IR Sensor
*************************/
// int IR_RECV_PIN = 37;

// void setupIR() {
//   IrReceiver.begin(IR_RECV_PIN, false);
// }

// void doIR() {
//   if (IrReceiver.decode()) {
//     uint32_t data = IrReceiver.decodedIRData.decodedRawData;
//     IrReceiver.resume();
//     if (data == 0) return;
//     Serial.print("!");
//     Serial.print(data, HEX);  // Print "old" raw data
//     Serial.print("_");
//   }
// }

/*************************
  Light Gun
*************************/
DFRobotIRPosition myDFRobotIRPosition;
SamcoBeta mySamco;
int res_x = 1920;  // Put your screen resolution width here
int res_y = 1080;  // Put your screen resolution height here

int _aimCallibrationPin = 16;

int positionX[4];  // RAW Sensor Values
int positionY[4];

int oneY = 0;  // Re-mapped so left sensor is always read first
int oneX = 0;
int twoY = 0;
int twoX = 0;

int xCenter = 512;  // Open serial monitor and update these values to save calibration
int yCenter = 450;
float xOffset = 1.47;
float yOffset = 0.82;

int finalX = 0;  // Values after tilt correction
int finalY = 0;
int prevReadX = 0;  // Values after tilt correction
int prevReadY = 0;

int xLeft = 0;  // Stored calibration points
int yTop = 0;
int xRight = 0;
int yBottom = 0;

int MoveXAxis = 0;  // Unconstrained mouse postion
int MoveYAxis = 0;

int conMoveXAxis = 0;  // Constrained mouse postion
int conMoveYAxis = 0;

int lightGunState = 4;  // Set intial count

int resetBtnState = 0;
int lastresetBtnState = 0;

int triggerState = 0;
int lastTriggerState = 0;

int trigCalliState = 0;
int lastTrigCalliState = 0;

int plus = 0;
int minus = 0;

void setupLightGun(int size_x = 1920, int size_y = 1080) {
  res_x = size_x;
  res_y = size_y;
  Mouse.screenSize(res_x, res_y);
  myDFRobotIRPosition.begin();  // Start IR Camera
  // myDFRobotIRPosition.available()
  // pinMode(_tigger, INPUT_PULLUP);
  pinMode(_aimCallibrationPin, INPUT_PULLUP);
}

#if defined(LED2_AIMING)
void doLightGun() {
  if (lightGunState > 3) {

    getPosition();
    PrintResults();
    go();

  }

  /* ------------------ START/PAUSE MOUSE ---------------------- */


  else if (lightGunState > 2) {

    mouseCount();
    PrintResults();

  }


  /* ---------------------- TOP LEFT --------------------------- */


  else if (lightGunState > 1) {

    // Mouse.move(300, 200);
    Mouse.moveTo(300, 200);

    mouseCount();
    getPosition();
    reset();

    xLeft = finalX;
    yTop = finalY;

    PrintResults();

  }


  /* -------------------- BOTTOM RIGHT ------------------------- */


  else if (lightGunState > 0) {

    // Mouse.move((res_x - 300), (res_y - 200));
    Mouse.moveTo((res_x - 300), (res_y - 200));

    mouseCount();
    getPosition();
    reset();

    xRight = finalX;
    yBottom = finalY;

    PrintResults();

  }


  /* ---------------------- LET'S GO --------------------------- */


  else {

    // Mouse.move(conMoveXAxis, conMoveYAxis);
    Mouse.moveTo(conMoveXAxis, conMoveYAxis);

    getPosition();

    MoveXAxis = map(finalX, xLeft, xRight, 300, (res_x - 300));
    MoveYAxis = map(finalY, yTop, yBottom, 200, (res_y - 200));
    conMoveXAxis = constrain(MoveXAxis, 0, res_x);
    conMoveYAxis = constrain(MoveYAxis, 0, res_y);

    PrintResults();
    reset();
  }
}

void getPosition() {  // Get tilt adjusted position from IR postioning camera
  myDFRobotIRPosition.requestPosition();

  if (myDFRobotIRPosition.available()) {
    for (int i = 0; i < 4; i++) {
      positionX[i] = myDFRobotIRPosition.readX(i);
      positionY[i] = myDFRobotIRPosition.readY(i);
    }

    if (positionX[0] > positionX[1]) {
      oneY = positionY[0];
      oneX = positionX[0];
      twoY = positionY[1];
      twoX = positionX[1];
    } else if (positionX[0] < positionX[1]) {
      oneY = positionY[1];
      oneX = positionX[1];
      twoY = positionY[0];
      twoX = positionX[0];
    } else {
      oneY = 1023;
      oneX = 0;
      twoY = 1023;
      twoX = 0;
    }

    finalX = 512 + cos(atan2(twoY - oneY, twoX - oneX) * -1) * (((oneX - twoX) / 2 + twoX) - 512) - sin(atan2(twoY - oneY, twoX - oneX) * -1) * (((oneY - twoY) / 2 + twoY) - 384);
    finalY = 384 + sin(atan2(twoY - oneY, twoX - oneX) * -1) * (((oneX - twoX) / 2 + twoX) - 512) + cos(atan2(twoY - oneY, twoX - oneX) * -1) * (((oneY - twoY) / 2 + twoY) - 384);

  }

  else {
#ifdef DEBUG
    Serial.println("Device not available!");
#endif
  }
}
#elif defined(LED4_AIMING)
void doLightGun() {

  /* ------------------ START/PAUSE MOUSE ---------------------- */
  if (lightGunState > 3) {
    skip();
    PrintResults();
    mouseCount();
  }


  /* ---------------------- CENTRE --------------------------- */


  else if (lightGunState > 2) {

    Mouse.moveTo((res_x / 2), (res_y / 2));

    mouseCount();
    getPosition();

    xCenter = finalX;
    yCenter = finalY;

    PrintResults();

  }


  /* -------------------- OFFSET ------------------------- */


  else if (lightGunState > 1) {

    mouseCount();
    Mouse.moveTo(conMoveXAxis, conMoveYAxis);
    getPosition();

    MoveYAxis = map(finalY, (yCenter + ((mySamco.H() * yOffset) / 2)), (yCenter - ((mySamco.H() * yOffset) / 2)), 0, res_y);
    conMoveXAxis = res_x / 2;
    conMoveYAxis = constrain(MoveYAxis, 0, res_y);

    if (plus == 1) {
      yOffset = yOffset + 0.01;
    } else {
    }

    if (minus == 1) {
      yOffset = yOffset - 0.01;
    } else {
    }

    PrintResults();

  }


  else if (lightGunState > 0) {

    mouseCount();
    Mouse.moveTo(conMoveXAxis, conMoveYAxis);
    getPosition();

    MoveXAxis = map(finalX, (xCenter + ((mySamco.H() * xOffset) / 2)), (xCenter - ((mySamco.H() * xOffset) / 2)), 0, res_x);
    conMoveXAxis = constrain(MoveXAxis, 0, res_x);
    conMoveYAxis = res_y / 2;

    if (plus == 1) {
      xOffset = xOffset + 0.01;
    } else {
    }

    if (minus == 1) {
      xOffset = xOffset - 0.01;
    } else {
    }

    PrintResults();

  }


  /* ---------------------- LET'S GO --------------------------- */


  else {

    Mouse.moveTo(conMoveXAxis, conMoveYAxis);

    getPosition();

    MoveXAxis = map(finalX, (xCenter + ((mySamco.H() * xOffset) / 2)), (xCenter - ((mySamco.H() * xOffset) / 2)), 0, res_x);
    MoveYAxis = map(finalY, (yCenter + ((mySamco.H() * yOffset) / 2)), (yCenter - ((mySamco.H() * yOffset) / 2)), 0, res_y);
    conMoveXAxis = constrain(MoveXAxis, 0, res_x);
    conMoveYAxis = constrain(MoveYAxis, 0, res_y);

    PrintResults();
    reset();
  }
}

void getPosition() {  // Get tilt adjusted position from IR postioning camera

  myDFRobotIRPosition.requestPosition();
  if (myDFRobotIRPosition.available()) {
    mySamco.begin(myDFRobotIRPosition.readX(0), myDFRobotIRPosition.readY(0), myDFRobotIRPosition.readX(1), myDFRobotIRPosition.readY(1), myDFRobotIRPosition.readX(2), myDFRobotIRPosition.readY(2), myDFRobotIRPosition.readX(3), myDFRobotIRPosition.readY(3), xCenter, yCenter);
    // finalX = mySamco.X();
    // finalY = mySamco.Y();

    int readX = mySamco.testMedianX();
    int readY = mySamco.testMedianY();

    finalX = readX + prevReadX;
    finalX /= 2;

    finalY = readY + prevReadY;
    finalY /= 2;

    prevReadX = readX;
    prevReadY = readY;
  } else {
    // Serial.println("Device not available!");
    myDFRobotIRPosition.begin();
  }
}
#endif

void go() {  // Setup Start Calibration Button

  resetBtnState = digitalRead(_aimCallibrationPin);

  if (resetBtnState != lastresetBtnState) {
    if (resetBtnState == LOW) {
      lightGunState--;
    } else {  // do nothing
    }
    delay(50);
  }
  lastresetBtnState = resetBtnState;
}

void skip() {  // Unpause button

  resetBtnState = digitalRead(_aimCallibrationPin);

  if (resetBtnState != lastresetBtnState) {
    if (resetBtnState == LOW) {
      lightGunState = 0;
      delay(50);
    } else {  // do nothing
    }
    delay(50);
  }
  lastresetBtnState = resetBtnState;
}

void mouseCount() {  // Set count down on trigger

  // buttonState2 = digitalRead(_tigger);
  float val = ReadTrigger();
  triggerState = lastTriggerState;
  if (lastTriggerState == LOW && val >= 1.0) triggerState = HIGH;
  else if (lastTriggerState == HIGH && val < 0.75) triggerState = LOW;
  // buttonState2 = floor(ReadTrigger());

  if (triggerState != lastTriggerState) {
    if (triggerState == LOW) {
      if (lightGunState < 100) lightGunState--;
    } else {  // do nothing
    }
    delay(10);
  }

  lastTriggerState = triggerState;
}

void reset() {  // Pause/Re-calibrate button

  resetBtnState = digitalRead(_aimCallibrationPin);

  if (resetBtnState != lastresetBtnState) {
    if (resetBtnState == LOW) {
      lightGunState = 3;
      delay(50);
    } else {  // do nothing
    }
    delay(50);
  }
  lastresetBtnState = resetBtnState;
}

void PrintResults() {  // Print results for debugging
#ifdef DEBUG
  Serial.print("State: ");
  Serial.print(lightGunState);
  Serial.print("    RAW: ");
  Serial.print(finalX);
  Serial.print(", ");
  Serial.print(finalY);
  Serial.print("     Count: ");
  Serial.print(lightGunState);
  Serial.print("     Calibration: ");
  Serial.print(xLeft);
  Serial.print(", ");
  Serial.print(yTop);
  Serial.print(", ");
  Serial.print(xRight);
  Serial.print(", ");
  Serial.print(yBottom);
  Serial.print("     Position: ");
  Serial.print(conMoveXAxis);
  Serial.print(", ");
  Serial.println(conMoveYAxis);
#endif
}


/*************************
  Trigger
*************************/
int _triggerPin = 41;
int _triggerDigiPin = 32;
int _vibrationPin = 14;
int digiTriggerState = -1;
int lastDigiTriggerState = -1;
int trigMaxCallibVal = 500;
int trigMinCallibVal = 400;
int _triggerCallibrationPin = 38;

float lastTrigVal = 0;

void setupTrigger() {
  pinMode(_triggerPin, INPUT);
  pinMode(_vibrationPin, OUTPUT);
  pinMode(_triggerDigiPin, INPUT_PULLUP);
  pinMode(_triggerCallibrationPin, INPUT_PULLUP);
}

float ReadTrigger() {
#if 1
  float trigRead = (float)(analogRead(_triggerPin));
#ifdef DEBUG
  Serial.print("!TrigRead: ");
  Serial.print(trigRead);
  Serial.print("!");
#endif
  float readVal = (trigRead - trigMinCallibVal) / (trigMaxCallibVal - trigMinCallibVal);
  readVal = 1.0 - constrain(readVal, 0.0, 1.0);
  float finalVal = readVal + lastTrigVal;
  finalVal /= 2;
  lastTrigVal = finalVal;
  return finalVal;
#else
  digiTriggerState = digitalRead(_triggerDigiPin);
  float returnVal;
  if (digiTriggerState != lastDigiTriggerState) {
    if (digiTriggerState == LOW) {
      returnVal = 1.1;
    } else {  // do nothing
      returnVal = 0;
    }
  }
  lastDigiTriggerState = digiTriggerState;
  return returnVal;
#endif
}

void doTrigger() {

  // if (lightGunState == 0) {
  float value = ReadTrigger();
  resetTriggerCallibraion();
#ifdef DEBUG
  Serial.print(trigMinCallibVal);
  Serial.print("-");
  Serial.print(trigMaxCallibVal);
#endif
  Serial.print(";");
  Serial.print(value);
  Serial.print("_");
  // analogWrite(_vibrationPin, constrain((value - 0.1) * 200, 0, 200));
  // digitalWrite(_vibrationPin, HIGH);
  // }
}


uint32_t lastReadTime = 0;
void resetTriggerCallibraion() {
  if (lightGunState == 103) {
    int read = analogRead(_triggerPin);
    uint32_t readTime = millis();
    if (read < trigMaxCallibVal || readTime - lastReadTime > 2000) {
      trigMaxCallibVal = read;
      lastReadTime = readTime;
    }
  } else if (lightGunState == 102) {

    int read = analogRead(_triggerPin);
    uint32_t readTime = millis();
    if (read > trigMinCallibVal || readTime - lastReadTime > 2000) {
      trigMinCallibVal = read;
      lastReadTime = readTime;
    }
  }

  trigCalliState = digitalRead(_triggerCallibrationPin);
  if (trigCalliState != lastTrigCalliState) {
    if (trigCalliState == LOW) {
      if (lightGunState < 100) {
        trigMaxCallibVal = 1024;
        trigMinCallibVal = 0;
        lightGunState = 103;
      } else if (lightGunState == 103) {
        trigMaxCallibVal -= 20;
#ifdef DEBUG
        Serial.println(trigMaxCallibVal);
#endif
        lightGunState = 102;
      } else if (lightGunState == 102) {
        trigMinCallibVal += 20;
#ifdef DEBUG
        Serial.println(trigMinCallibVal);
#endif
        lightGunState = 0;
      }
      delay(50);
    } else {  // do nothing
    }
    delay(50);
  }

  lastTrigCalliState = trigCalliState;
}

/*************************
  Ultra Sound 
*************************/
int US_TRIG_PIN = 29;
int US_ECHO_PIN = 33;
double duration_us, distance_cm;
double upperRockThershold = 8, lowerRockThreshold = 7;

UltraSonicDistanceSensor distanceSensor(US_TRIG_PIN, US_ECHO_PIN);

void setupUltraSound() {
  pinMode(US_TRIG_PIN, OUTPUT);
  pinMode(US_ECHO_PIN, INPUT);
}

void doUltraSoundSensor() {
  distance_cm = distanceSensor.measureDistanceCm();

  // // print the value to Serial Monitor
  double val = (distance_cm - lowerRockThreshold) / (upperRockThershold - lowerRockThreshold);

  val = constrain(val, 0, 1);

  Serial.print("|");
  Serial.print(val);
  Serial.print("_");
}

/*************************
  Main
*************************/
void setup() {

  Serial.begin(9600);
  // while (!Serial)
  //   ;

  // setupRFID();
  setupCupSensor();
  setupUltraSound();

  setupTrigger();
  setupLightGun();
}

void loop() {

  long int t1 = millis();
  // doRFID();

  doCupSensor();
  // // Serial.println();
  doUltraSoundSensor();
  // Serial.println();
  doTrigger();
  // Serial.println();
  doLightGun();

#ifdef DEBUG
  Serial.println();
#endif

  long int t2 = millis();

  long int delta = (t2 - t1);
  // Serial.println("");
  // Serial.println(delta);
  // Serial.println("");

  delay(16);
  // Serial.println("Yo");
}