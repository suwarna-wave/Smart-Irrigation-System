#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // Set the LCD address to 0x27 for a 16 chars and 2 line display
int soilMoisturePin = A0;           // Analog pin for soil moisture sensor
int pumpPin = 10;                    // Pin to control water pump
int moistureThreshold = 500;         // Adjust threshold as per your requirement

void setup() {
  lcd.init();        // Initialize the LCD
  lcd.backlight();   // Turn on backlight
  pinMode(pumpPin, OUTPUT); // Set pump pin as output
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int soilMoisture = analogRead(soilMoisturePin); // Read soil moisture value

  lcd.clear();                 // Clear display
  lcd.setCursor(0, 0);         // Set cursor to (0, 0)
  lcd.print("Soil Moisture:"); // Print message
  lcd.setCursor(0, 1);         // Set cursor to (0, 1)
  lcd.print(soilMoisture);     // Print soil moisture value
  lcd.print("     ");          // Clear remaining space

  if (soilMoisture < moistureThreshold) {
    digitalWrite(pumpPin, HIGH); // Turn on pump if soil moisture is below threshold
    Serial.println("Watering the plants..."); // Print message to serial monitor
    lcd.setCursor(0, 1);        // Set cursor to (0, 1)
    lcd.print("Watering...");   // Print message on LCD
  } else {
    digitalWrite(pumpPin, LOW);  // Turn off pump if soil moisture is above threshold
    Serial.println("Soil moisture is sufficient."); // Print message to serial monitor
    lcd.setCursor(0, 1);        // Set cursor to (0, 1)
    lcd.print("No watering");   // Print message on LCD
  }

  delay(1000); // Delay to avoid rapid readings
}
