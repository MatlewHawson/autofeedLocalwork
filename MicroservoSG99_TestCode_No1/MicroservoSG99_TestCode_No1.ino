//MatlewHawson
//TestCode No. 1
//The purpose of this program (and other similarly named TestCodes) iss to experiment with the servo
//Servo used: Tower Pro MicroServo 9G (SG90)
#include <Servo.h>

int servoA =13;
int servoAang=0;
Servo servo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo.attach(servoA);
}

void loop() {
  //Goes through the range of the servo positions; Do not use any thing less than 5.
  //theoretically the servo could be set up for continuous rotation, but that will require more toying with it.
  //Setting a single digit number lower than 5 causes the servo to rotate twice fully and continue to the next position.
  //Setting a number higher than 180 will simply cause the servo to go to the 180 position.
  delay(1000);
  servo.write(5);//lowest acceptable position value.
  //delay(1000);
  //servo.write(10);
  delay(1000);
  servo.write(15);//"level" with 180 (as compared to 0 degrees on a unit circle; don't quit know why that is.
  delay(1000);                      //I'll have to look into the servo and the default servo library about it).
  servo.write(45);
  delay(1000);
  servo.write(90);//90 degrees is the middle position ("halfway").
  delay(1000);
  servo.write(135);
  delay(1000);
  servo.write(180);//Highest acceptable position value.
  delay(1000);
  servo.write(135);
  delay(1000);
  servo.write(90);
  delay(1000);

  
  //"Mechanical Debug Line", can be set (and other lines commented out using /*these*/) in-order to set the servo to 90 degree position. 
  //servo.write(90);
}
