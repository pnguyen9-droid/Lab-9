# Arduino DC Voltage Measurement with I2C LCD

## Overview

Design and implement a DC voltage measurement circuit using the Arduino’s onboard ADC and
the LCD display. Use two probe wires to measure voltage, and display the measured value on the
LCD screen. Do not use the Serial Monitor to display the voltage.
---

## Features

* Real-time voltage measurement
* LCD display output (no Serial Monitor needed)
* Simple wiring using I2C (only 2 data pins)
* Accurate to 2 decimal places

---

## Components Required

* Arduino Uno
* 16x2 I2C LCD
* Breadboard
* Jumper wires
* Voltage source (LED circuit, resistor, etc.)

---

## Arduino Pin Layout / Wiring

### **LCD (I2C) Connections**

| LCD Pin | Arduino Uno |
| ------- | ----------- |
| VCC     | 5V          |
| GND     | GND         |
| SDA     | A4          |
| SCL     | A5          |

---

### **Voltage Measurement Connections**

| Connection     | Arduino |
| -------------- | ------- |
| Positive probe | A0      |
| Negative probe | GND     |

---

##  How It Works CODE: lab9.ino

1. The Arduino reads analog voltage from pin **A0**
2. The ADC converts it into a value between **0–1023**
3. The code converts this into a voltage (0–5V)
4. The result is displayed on the LCD screen

