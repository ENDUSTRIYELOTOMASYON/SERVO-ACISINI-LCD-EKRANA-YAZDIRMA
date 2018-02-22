#include <LiquidCrystal.h>
#include <Servo.h>
LiquidCrystal lcd(12,11,5,4,3,2);
Servo servo_kontrol;//SErvo_kontrol adında servo nesnesi oluşturuldu
int pot_pin=0;
int servo_pin=6;
int pot_deger=0;
int servo_aci=0;

void setup(){
  lcd.begin(16,2);
  servo_kontrol.attach(servo_pin);
}
void loop() {
 pot_deger=analogRead(pot_pin);
 servo_aci=map(pot_deger,0,1023,0,180);
 servo_kontrol.write(servo_aci);
 lcd.setCursor(0,0);
 lcd.print("ACI DEGERI: ");
 lcd.setCursor(13,0);
 lcd.print(servo_aci);
 delay(100); 
 lcd.clear();
}
