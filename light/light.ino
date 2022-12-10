  void setup() {

}

void loop() {
  for (int count = 0; count < 150; count++) {
    for (int count = 0; count < 2; count++) {
      for (int count = 0; count < 15; count++) { pinMode(4, OUTPUT);
       digitalWrite(4, 1);
       delayMicroseconds((7 * 110 + 500));
       pinMode(4, OUTPUT);
       digitalWrite(4, 0);
       delay(20);
       }
       delay(100);
      for (int count = 0; count < 15; count++) { pinMode(4, OUTPUT);
       digitalWrite(4, 1);
       delayMicroseconds((7 * 0 + 500));
       pinMode(4, OUTPUT);
       digitalWrite(4, 0);
       delay(20);
       }
       delay(100);
    }
    delay(21600*1000);
    for (int count = 0; count < 7; count++) {
      for (int count = 0; count < 15; count++) { pinMode(4, OUTPUT);
       digitalWrite(4, 1);
       delayMicroseconds((7 * 110 + 500));
       pinMode(4, OUTPUT);
       digitalWrite(4, 0);
       delay(20);
       }
       delay(100);
      for (int count = 0; count < 15; count++) { pinMode(4, OUTPUT);
       digitalWrite(4, 1);
       delayMicroseconds((7 * 0 + 500));
       pinMode(4, OUTPUT);
       digitalWrite(4, 0);
       delay(20);
       }
       delay(64800*1000);
    }
  }

}  
