# Smart-Irrigation-System
Sure, here's a step-by-step guide along with the proper pinouts for setting up your smart irrigation system with Arduino, soil moisture sensor, water pump, and LCD display:

### Components Required:
1. Arduino Uno or similar board
2. Soil moisture sensor
3. Mini Water pump
4. 16x2 LCD display with I2C adapter
5. Jumper wires
6. Power supply (if needed)

### Pinout Connections:
- Soil Moisture Sensor:
  - Connect the VCC pin to the 5V pin on the Arduino.
  - Connect the GND pin to the GND pin on the Arduino.
  - Connect the AO pin to analog pin A0 on the Arduino.

- Water Pump:
  - Connect one terminal of the water pump to the digital pin 10 on the Arduino.
  - Connect the other terminal of the water pump to GND pin on the Arduino.

- LCD Display:
  - Connect the SDA pin of the I2C Module to the A4 pin on the Arduino.
  - Connect the SCL pin of the I2C MOdule to the A5 pin on the Arduino.
  - Connect the VCC pin of the I2C Module to the 5V pin on the Arduino.
  - Connect the GND pin of the I2C Module to the GND pin on the Arduino.

### Steps:
1. **Connect Components**: Wire up the components according to the pinout connections mentioned above.

2. **Install Libraries**:
   - If you haven't already, you need to install the LiquidCrystal_I2C library for your LCD display. You can do this in the Arduino IDE by going to Sketch -> Include Library -> Manage Libraries and then searching for "LiquidCrystal_I2C" by Adafruit and installing it.

3. **Upload Code**:
   - Open the Arduino IDE and copy the provided code into a new sketch.
   - Connect your Arduino board to your computer using a USB cable.
   - Select the correct board and port from the Tools menu in the Arduino IDE.
   - Click the Upload button to upload the code to your Arduino board.

4. **Calibrate Soil Moisture Sensor**:
   - Calibrate your soil moisture sensor according to your plant's requirements. You can adjust the `moistureThreshold` variable in the code to set the desired threshold value.

Following these steps should help you set up your smart irrigation system for your agriculture project. Make sure to test the system thoroughly to ensure it functions reliably.
