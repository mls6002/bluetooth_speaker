  // setup servo library and start position
  # include <Servo.h> // include servo library
  Servo servoSpeaker; // declare speaker base servo
  // declare variables that can be varied to change the servo position
  int gndPin = A0;
  int plusPin = A2;
  int potPin = A1;
void setup() {
  servoSpeaker.attach(9); // attach servo to pin 9
  pinMode(gndPin, OUTPUT);
  digitalWrite(gndPin, LOW);
  pinMode(plusPin, OUTPUT);
  digitalWrite(plusPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potPosition = analogRead(potPin); // 0 to 1023
  int angle = potPosition / 6 ; // 0 to 170
  servoSpeaker.write(angle);
}
