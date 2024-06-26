
#define US_TRIG_PIN 2
#define US_ECHO_PIN 3

#define TB_INPUT 8
#define TB_LED 13

float duration_us, distance_cm;

int lastTiltState = HIGH;  // the previous reading from the tilt sensor
int sensorValue;
// the following variables are long's because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long lastDebounceTime = 0;  // the last time the output pin was toggled
long debounceDelay = 50;    // the debounce time; increase if the output flickers

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(US_TRIG_PIN, OUTPUT);
  pinMode(US_ECHO_PIN, INPUT);

  pinMode(TB_INPUT, INPUT);
  pinMode(TB_LED, OUTPUT);
}

void loop() {
  LoopUltraSoundSeneor();

  sensorValue = digitalRead(TB_INPUT);
  // If the switch changed, due to noise or pressing:
  if (sensorValue == lastTiltState) {
    // reset the debouncing timer
    lastDebounceTime = millis();
  }
  if ((millis() - lastDebounceTime) > debounceDelay) {
    // whatever the reading is at, it's been there for longer
    // than the debounce delay, so take it as the actual current state:
    lastTiltState = sensorValue;
  }
  digitalWrite(TB_LED, lastTiltState);

  Serial.println(sensorValue);
  delay(10);
}

void LoopUltraSoundSeneor() {
  // generate 10-microsecond pulse to TRIG pin
  digitalWrite(US_TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(US_TRIG_PIN, LOW);

  // measure duration of pulse from ECHO pin
  duration_us = pulseIn(US_ECHO_PIN, HIGH);

  // calculate the distance
  distance_cm = 0.017 * duration_us;

  // print the value to Serial Monitor
  Serial.print("distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");
}