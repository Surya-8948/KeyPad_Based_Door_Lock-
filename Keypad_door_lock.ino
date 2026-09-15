#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>
#include <Servo.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo lockServo;
char keys[4][4] =
{
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'}
};
byte rowPins[4] = {11, 10, 9, 8};
byte colPins[4] = {7, 6, 5, 4};
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, 4, 4);

const String SECRET = "1234";   // Fixed PIN
String input = "";

void setup()
{
  lcd.init();
  lcd.backlight();
  lockServo.attach(3);
  lockServo.write(180);          // Locked start
  lcd.print("Enter PIN:");
}

void loop()
{
  char key = keypad.getKey();
  if (!key) return;

  if (key >= '0' && key <= '9' && input.length() < 4) 
  {
    input += key;
    lcd.setCursor(input.length() - 1, 1);
    lcd.print("*");
  }

  if (key == '#')
  {
    if (input == SECRET)
    {
      lockServo.write(0);
      lcd.clear();
      lcd.print("Unlocked");
      delay(2000);
      lockServo.write(180);

    }
    else 
    {
      lcd.clear();
      lcd.print("Wrong PIN");
      delay(1500);
    }
    input = "";
    lcd.clear();
    lcd.print("Enter PIN:");
  }
}
