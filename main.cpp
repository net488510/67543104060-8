// Library version:1.1.5
// Example of picking custom I2C pins on ESP32

#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

#define I2C_SDA 21
#define I2C_SCL 22

LiquidCrystal_I2C lcd(0x27, 20, 4); // set the LCD address to 0x27 for a 16 chars and 2 line display

int led1 = 23, led2 = 19, led3 = 18, led4 = 5, led5 = 17, led6 = 16, led7 = 4, led8 = 0;
int sw_next = 15;
int sw_ok = 2;

void setup()
{
	lcd.init(I2C_SDA, I2C_SCL); // initialize the lcd to use user defined I2C pins
	lcd.backlight();

	pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led7, OUTPUT);
pinMode(led8, OUTPUT);

	pinMode(sw_next, INPUT_PULLUP);
	pinMode(sw_ok, INPUT_PULLUP);
}

int menu = 0;

void loop()
{

	int status_next = digitalRead(sw_next);
	if (status_next == 1)
	{
		menu++;
		if (menu == 6)
		{
			menu = 0;
		}
	}
lcd.clear();
	if (menu == 0)
	{
		lcd.setCursor(0, 0);
		lcd.print("MENU:");
		lcd.print(menu + 1);
	}
	else if (menu == 1)
	{
		lcd.setCursor(0, 0);
		lcd.print("MENU:");
		lcd.print(menu + 1);
	}
	else if (menu == 2)
	{
		lcd.setCursor(0, 0);
		lcd.print("MENU:");
		lcd.print(menu + 1);
	}
	else if (menu == 3)
	{
		lcd.setCursor(0, 0);
		lcd.print("MENU:");
		lcd.print(menu + 1);
	}
	else if (menu == 4)
	{
		lcd.setCursor(0, 0);
		lcd.print("MENU:");
		lcd.print(menu + 1);
	}
	else if (menu == 5)
	{
		lcd.setCursor(0, 0);
		lcd.print("MENU:");
		lcd.print(menu + 1);
	}
	delay(200);

	int status_ok = digitalRead(sw_ok);

	if (status_ok == 1)
	{
		if (menu == 0)
		{
			lcd.setCursor(0, 0);
			lcd.print("Selected MENU:");
			lcd.print(menu + 1);
			digitalWrite(led1, 1);
			digitalWrite(led2, 1);
			digitalWrite(led3, 1);
			digitalWrite(led4, 1);
			digitalWrite(led5, 1);
			digitalWrite(led6, 1);
			digitalWrite(led7, 1);
			digitalWrite(led8, 1);
			
			delay(3000);
			digitalWrite(led1, 0);
			digitalWrite(led2, 0);
			digitalWrite(led3, 0);
			digitalWrite(led4, 0);
			digitalWrite(led5, 0);
			digitalWrite(led6, 0);
			digitalWrite(led7, 0);
			digitalWrite(led8, 0);
		}
		else if (menu == 1)
		{
			lcd.setCursor(0, 0);
			lcd.print("MENU:");
			lcd.print(menu + 1);
		}
		else if (menu == 2)
		{
			lcd.setCursor(0, 0);
			lcd.print("MENU:");
			lcd.print(menu + 1);
		}
		else if (menu == 3)
		{
			lcd.setCursor(0, 0);
			lcd.print("MENU:");
			lcd.print(menu + 1);
		}
		else if (menu == 4)
		{
			lcd.setCursor(0, 0);
			lcd.print("MENU:");
			lcd.print(menu + 1);
		}
		else if (menu == 5)
		{
			lcd.setCursor(0, 0);
			lcd.print("MENU:");
			lcd.print(menu + 1);
		}
		delay(200);
	}
}
