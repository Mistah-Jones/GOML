#include <Wire.h>
#include <DFRobotIRPosition.h>
#include <Samco.h>

// Tigger is set to LEFT_MOUSE, A Button is set to RIGHT_MOUSE & B Button is set to MIDDLE_MOUSE

// char _upKey = KEY_UP_ARROW;
// char _downKey = KEY_DOWN_ARROW;
// char _leftKey = KEY_LEFT_ARROW;
// char _rightKey = KEY_RIGHT_ARROW;
// char _startKey = KEY_RETURN;
// char _selectKey = KEY_BACKSPACE;



int finalX;  // Values after tilt correction
int finalY;

int MoveXAxis;  // Unconstrained mouse postion
int MoveYAxis;

int conMoveXAxis;  // Constrained mouse postion
int conMoveYAxis;

int count = 4;  // Set intial count

int _tiggerPin = 7;  // Label Pin to buttons
int _upPin = 11;
int _downPin = 9;
int _leftPin = 10;
int _rightPin = 12;
int _APin = A1;
int _BPin = A0;
int _startPin = A2;
int _selectPin = A3;
int _reloadPin = 13;
int _pedalPin = 5;

int buttonState1 = 0;
int lastButtonState1 = 0;
int buttonState2 = 0;
int lastButtonState2 = 0;
int buttonState3 = 0;
int lastButtonState3 = 0;
int buttonState4 = 0;
int lastButtonState4 = 0;
int buttonState5 = 0;
int lastButtonState5 = 0;
int buttonState6 = 0;
int lastButtonState6 = 0;
int buttonState7 = 0;
int lastButtonState7 = 0;
int buttonState8 = 0;
int lastButtonState8 = 0;
int buttonState9 = 0;
int lastButtonState9 = 0;
int buttonState10 = 0;
int lastButtonState10 = 0;
int buttonState11 = 0;
int lastButtonState11 = 0;

DFRobotIRPosition myDFRobotIRPosition;
Samco mySamco;

int res_x = 1024;  // UPDATE: These values do not need to change
int res_y = 768;  // UPDATE: These values do not need to change

int xCenter = res_x/2;  // If second calibration seems more accurate you can replace these values with the altered camera center values from serial monitor
int yCenter = res_y/2;

int xLeft = 0;  // Stored calibration points
int yTop = 0;
int xRight = res_x;
int yBottom = res_y;

void setup() {

  myDFRobotIRPosition.begin();
  Mouse.screenSize(res_x, res_y);
  Serial.begin(9600);  // For debugging (make sure your serial monitor has the same baud rate)



  delay(500);
}

int f = 0;
int u = 0;

void loop() {


  // Mouse.moveTo(conMoveXAxis, conMoveYAxis);

  getPosition();

  MoveXAxis = map(finalX, xLeft, xRight, 300, (res_x - 300));
  MoveYAxis = map(finalY, yTop, yBottom, 200, (res_y - 200));
  conMoveXAxis = constrain(MoveXAxis, 0, res_x);
  conMoveYAxis = constrain(MoveYAxis, 0, res_y);

  PrintResults();
  delay(50);
  // }
}


/*        -----------------------------------------------        */
/* --------------------------- METHODS ------------------------- */
/*        -----------------------------------------------        */


void getPosition() {  // Get tilt adjusted position from IR postioning camera

  myDFRobotIRPosition.requestPosition();
  if (myDFRobotIRPosition.available()) {
    mySamco.begin(myDFRobotIRPosition.readX(0), myDFRobotIRPosition.readY(0), myDFRobotIRPosition.readX(1), myDFRobotIRPosition.readY(1), myDFRobotIRPosition.readX(2), myDFRobotIRPosition.readY(2), myDFRobotIRPosition.readX(3), myDFRobotIRPosition.readY(3), xCenter, yCenter);
    finalX = mySamco.X();
    finalY = mySamco.Y();
  } else {
    Serial.println("Device not available!");
  }
}


void PrintResults() {  // Print results for debugging

  Serial.print("RAW: ");
  Serial.print(finalX);
  Serial.print(", ");
  Serial.print(finalY);
  Serial.print("     Count: ");
  Serial.print(count);
  Serial.print("     Calibration: ");
  Serial.print(xLeft);
  Serial.print(", ");
  Serial.print(yTop);
  Serial.print(", ");
  Serial.print(xRight);
  Serial.print(", ");
  Serial.print(yBottom);
  Serial.print("     Cam Center: x ");
  Serial.print(xCenter);
  Serial.print(", y ");
  Serial.print(yCenter);
  Serial.print(" Move Center: x ");
  Serial.print(MoveXAxis);
  Serial.print(", y ");
  Serial.print(MoveYAxis);
  Serial.print(" con Move Center: x ");
  Serial.print(conMoveXAxis);
  Serial.print(", y ");
  Serial.println(conMoveYAxis);
}