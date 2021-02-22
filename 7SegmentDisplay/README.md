# 7 Segment display counter

## Version 1.0.0


 ---
 This code is written for a **Arduino UNO** 
 ---
 
 ## Parts
* The 7 segment display is a common anode (part number: 5161AS) 
* 3x resistors
* 2x buttons

---
## Button Counter

### Buttons:
- Count up button connected from 5V to  pin 2 and (20ohm resistor then ground)   
- Count down button connected from 5V to pin 3 and (20ohm resistor then ground)

### 7 Segment Display
  * ledLightA connected to pin 6
  * ledLightB connected to pin 7
  * ledLightC connected to pin 10
  * ledLightD connected to pin 9
  * ledLightE connected to pin 8 
  * ledLightF connected to pin 5
  * ledLightG connected to pin 4
  * ledLightdp connected to pin 11
  * one of the GND pins connected to grount with a 20ohm resistor

## Circuit:

Although the resistors are used for safety of the leds a 20ohm resistor is not needed, but would be recommended

---

## Contributers

-MCvanderBerg
