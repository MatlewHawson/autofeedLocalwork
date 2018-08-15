//MatlewHawson,
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
  //Goes through the range of the servo positions; Do not use any thing less than 10 degrees.
  //theoretically the servo could be set up for continuous rotation, but that will require more toying with it.
  delay(1000);
  servo.write(5);//lowest acceptable position value
  //delay(1000);
  //servo.write(10);
  delay(1000);
  servo.write(15);//"level" with 180 (as compared to 0 degrees on a unit circle; don't quit know why that is).
  delay(1000);
  servo.write(45);
  delay(1000);
  servo.write(90);//90 degrees is the middle position ("halfway")
  delay(1000);
  servo.write(135);
  delay(1000);
  servo.write(180);//Highest acceptable position value
  delay(1000);
  servo.write(135);
  delay(1000);
  servo.write(90);
  delay(1000);

  
  //"Mechanical Debug Line", can be set in-order to set the servo to 90 degree positions. 
  //servo.write(90);
}
