#include <Servo.h>
Servo servo;
void setup() 
{
  servo.attach(10);

}

void loop() {
servo.write(0);
delay (300);
servo.write(110);
delay (300);
servo.write(0);
delay (300);
servo.write(110);
delay (300);
servo.write(0);
delay(64800000);
servo.write(0);
delay (300);
servo.write(110);
delay (300);
servo.write(0);
delay (300);
servo.write(110);
delay (300);
servo.write(0);
delay (300);
servo.write(110);
delay (300);
servo.write(0);
delay (300);
servo.write(110);
delay (300);
servo.write(0);
delay (300);
servo.write(110);
delay (300);
servo.write(0);
delay (300);
servo.write(110);
delay (300);
servo.write(0);
servo.write(110);
delay (300);
servo.write(0);
delay (21600000);


}
