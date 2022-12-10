#define pirPin 3
#define LedPin 12
void setup() {
 Serial.begin(9600);
 pinMode(pirPin, INPUT);
 pinMode(LedPin,OUTPUT);
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
