#include <LiquidCrystal.h>
LiquidCrystal
lcd (12,11,5,4,3,2);
int h=17;
int m=;
int s55;
int flag;
int ms=9;
int state1;
int state2;
void setup ()
{
  lcd.begin(16,2);
}
void loop ()
{
  lcd.setCursor(0,0);
  s=s+1;
  lcd.print("TIME:");
  lcd.print(h);
  lcd.print(":");
  lcd.print(m);
  lcd.print(":");
  lcd.print(s);
  delay(990);
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("     H MM SS");
  if(s%60==0){
    s=0;
    m=m+1;
  }
  if(m==60)
  {
    m=0;
    h=h+1;
    flag=flag+1;
 
  }
  if(h==24)
  {
    h=0;
     {
    h=0;



  }}}
  
