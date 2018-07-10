#include <LiquidCrystal.h> 
LiquidCrystal 
lcd(12,11,5,4,3,2); 
int rok=2018,miesiac=12,dzien=21,h,m,s,granica=32,ustaw=0,menu=0;
char przycisk1, przycisk2, przycisk3, przycisk4, przycisk5;
void setup() 
{ 
 lcd.begin(16,2); 
 pinMode(13,OUTPUT);
 pinMode(10,INPUT_PULLUP);
 pinMode(9,INPUT_PULLUP);
 pinMode(8,INPUT_PULLUP);
 pinMode(7,INPUT_PULLUP);
 pinMode(6,INPUT_PULLUP);
 przycisk1=10;
 przycisk2=9;
 przycisk3=8;
 przycisk4=7;
 przycisk5=6;
 }
 
void loop() {
if(digitalRead(przycisk1)==LOW){
  menu=1;
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.write("Ustawienia");
  digitalWrite(13,HIGH);
  delay(200);
  digitalWrite(13,LOW);
  delay(1500);
  lcd.clear();
  }
while(menu==1){
  lcd.setCursor(3,0);
  lcd.write("Czas");
  lcd.blink();
  lcd.setCursor(3,1);
  lcd.write("Budzik");
  delay(1000);
  if(digitalRead(przycisk2) || digitalRead(przycisk3)){
    lcd.setCursor(3,0);
    lcd.write("Czas");
    lcd.blink();
    lcd.setCursor(3,1);
    lcd.write("Budzik");
    lcd.setCursor(3,0);
    delay(1000);

    }
  }

{
 lcd.setCursor(0,0);
 s=s+1;
 lcd.print("Czas: ");

 if(h<10){
    lcd.print("0");
    lcd.print(h);
 }else(lcd.print(h));
 
 
 lcd.print(":");
 if(m<10){
    lcd.print("0");
    lcd.print(m);
 }else(lcd.print(m));
 
 lcd.print(":");

 if(s<10){
    lcd.print("0");
    lcd.print(s);
 }else(lcd.print(s));

 lcd.setCursor(0,1);
 lcd.print("Data: ");
  if(dzien<10){
    lcd.print("0");
    lcd.print(dzien);
 }else(lcd.print(dzien));
 lcd.print("/");
  if(miesiac<10){
    lcd.print("0");
    lcd.print(miesiac);
 }else(lcd.print(miesiac));
 lcd.print("/");
 lcd.print(rok);
 
 if(s==60){
  m=m+1;
  s=0;
 }
 if(m==1){
  h=h+1;
  m=0;
 }
 if(h==1){
  h=0;
  dzien=dzien+1;
 }
 if(dzien==granica){
  miesiac=miesiac+1;
  if(miesiac ==1 || miesiac ==3 || miesiac ==5 || miesiac ==7 || miesiac ==8 || miesiac ==10 || miesiac ==12){
    granica=32;
    dzien=1;
  }else{
    if(miesiac == 2){
      granica=29;
      dzien=1;
    }else{
      granica=31;
      dzien=1;
    }
  }
 }
 if(miesiac==13){
  rok=rok+1;
  miesiac=1;
  granica=32;
  }
 delay(0);
}}
  
 
