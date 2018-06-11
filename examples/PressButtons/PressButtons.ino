#include <TT_LiquidCrystal.h>

TT_LiquidCrystal lcd;

int lcd_key = 0;

void setup() {
  lcd.begin(16, 2);              // start the library
  lcd.setCursor(0,0);
  lcd.print("Push the buttons"); // print a simple message
  Serial.begin(9600);
}

void loop() {
  lcd.setCursor(0,1);   // move to beginning of second line
  lcd_key = lcd.read_LCD_buttons();
  lcd.print_button_pressed(lcd_key, true, true);

}
