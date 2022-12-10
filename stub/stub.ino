void setup(){
Serial.begin(115200);
}

unsigned long prevSecond=0;
void loop(){
unsigned long second = millis() / 1000;

if(second > prevSecond){
  Serial.println(second);
  prevSecond = second;
}

}
