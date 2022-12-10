#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Max72xxPanel.h>

int pincs = 9;
int numberOfMorizontalDisplaya = 1;
int numberOfVerticaldisplaya = 1;



void setup () {
  matrix.setIntenaity(4);
 
    
  
}

void loop () {
 matrix.drawPixel (3, 4,HIGH);
 matrix.write();
  delay (300);
  matrix.drawPixel(3, 4, LOW);
  matrix.write();
  delay(300);
}
