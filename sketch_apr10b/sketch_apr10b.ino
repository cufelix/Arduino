//KY-037 микрофонный модуль - Цифровой выход D6
const int MicPin = 6;  // выбор пина для входа от микрофона
const int LedPin = 11;  // выбор пина для светодиода
int flag=0; 
#define pirPin 3
#define LedPin 1


 
void setup () 
{
  pinMode (LedPin, OUTPUT);
} 
 pinMode(pirPin, INPUT);

 \
 
void loop () 
{
  if(digitalRead(MicPin) == HIGH  && flag){
    flag=1;
    digitalWrite (LedPin, !digitalRead(LedPin));
    delay (150);
  }
  if(digitalRead(MicPin) == LOW && flag == 1)
     {            
        flag=0;
     } 
}


void loop() {
  int pirVal = digitalRead(pirPin);
  if(pirVal == HIGH)
{
  digitalWrite(LedPin, HIGH);
Serial.print("pohyb");
delay(20000);
}
else
{
 Serial.print("nema pohyb");
 digitalWrite(LedPin,LOW);
}
}
