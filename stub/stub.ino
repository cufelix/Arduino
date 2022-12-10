void setup(){

}

unsigned long prevSecond=0;
void loop(){
Serial.begin(115200);
//Seria updated
}

unsigned long second = millis() / 1000;

if(second > prevSecond){
  Serial.println(second);
  prevSecond = second;
}

}
