#include <Servo.h>
#include<GyverPower.h>
  Servo servo;  
  
void setup(){
 power.autoCalibrate();
 power.setSleepMode (POWERDOWN_SLEEP);
 servo.attach(7);
}

void loop(){
  servo.write(0);
  delay(200);
   servo.write(110);
   delay(200);
  servo.write(0);
  delay(200);
  servo.write(110);
  delay(200);
  power.sleepDelay (21600000);
  servo.write(0);
  delay(200);
  servo.write(110);
  delay(200);
  servo.write(0);
  delay(200);
  servo.write(110);
  delay(200);
  servo.write(0);
  delay(200);
  servo.write(110);
  delay(200);
  servo.write(0);
  delay(200);
  servo.write(110);
  delay(200);
  servo.write(0);
  delay(200);
  servo.write(110);
  delay(200);
  servo.write(0);
  delay(200);
  servo.write(110);
  delay(200);
  servo.write(0);
  delay(200);
  servo.write(110);
  delay(200);
  power.sleepDelay(64800000);

  
  
}
 
