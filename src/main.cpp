#include <Arduino.h>
#include <LiquidCrystal.h>
#include <Thermistor.h>

#define LUZ 10

Thermistor temp(A5);
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

int luminosidade = 0;
int temperatura = 0;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.clear();

  pinMode(LUZ, OUTPUT);

}

void loop() {
  
  luminosidade = analogRead(A0);
  
  Serial.print("Ilum.: ");
  Serial.print(luminosidade);

  lcd.setCursor(0, 0);
  lcd.print("Ilum.: ");
  lcd.print(luminosidade);

  if(luminosidade < 400) {
    digitalWrite(LUZ, HIGH);
  } else {
    digitalWrite(LUZ, LOW);
  }

  temperatura = temp.getTemp();
  Serial.print("Temp.:  ");
  Serial.print(temperatura);
  Serial.println(" ˚C");

  lcd.setCursor(0, 1);
  lcd.print("Temp. : ");
  lcd.print(temperatura);
  lcd.print(" C");
  delay(1000);

}
