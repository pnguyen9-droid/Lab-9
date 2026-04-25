#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LCD I2C address (usually 0x27 or 0x3F)
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Voltmeter");
  delay(1500);
  lcd.clear();
}

void loop() {
  int sensorValue = analogRead(A0);

  // Convert ADC value to voltage (0–5V range)
  float voltage = sensorValue * (5.0 / 1023.0);

  lcd.setCursor(0, 0);
  lcd.print("Voltage:");

  lcd.setCursor(0, 1);
  lcd.print("      ");  // clear old value
  lcd.setCursor(0, 1);
  lcd.print(voltage, 2);
  lcd.print(" V");

  delay(500);
}