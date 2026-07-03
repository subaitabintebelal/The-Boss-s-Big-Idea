Summary:
1. Connected all VCC pins of Relay in 5V
2. Connected all GND pins of Relay in Ground
3. Connected all IN pins of Relay in seperate ESP32 pins
4. Connected all COM pins of Relay in 5V
5. Connected all NO pins of Relay with LED Anode
6. Connected all LED Cathode with Resistor and all the Resistor connects with ground
7. Connected ESP32 VCC with 5V and GND with Ground

TestCode(sketch.ino): The LED of relay and the corresponding LEDs turns ON in following manner: LIGHT1->LIGHT2->LIGHT3->FAN1->FAN2 and then all 5 devices together. Thats how by integrating software with this hardware we can understand which device is ON/OFF.

Detailed Explaination:
Device 1 — Light 1 (GPIO 4)
Step 1 — ESP32 GPIO4 → Relay1 IN
Step 2 — ESP32 5V (labeled VIN on the DevKit) → Relay1 VCC
Step 3 — ESP32 GND → Relay1 GND
Step 4 — 5V supply rail + → Relay1 COM
Step 5 — Relay1 NO → LED1 anode (long leg)
Step 6 — LED1 cathode (short leg) → 220Ω resistor → GND rail

Device 2 — Light 2 (GPIO 5)
Step 7 — ESP32 GPIO5 → Relay2 IN
Step 8 — ESP32 5V → Relay2 VCC
Step 9 — ESP32 GND → Relay2 GND
Step 10 — 5V rail + → Relay2 COM
Step 11 — Relay2 NO → LED2 anode
Step 12 — LED2 cathode → 220Ω resistor → GND rail

Device 3 — Light 3 (GPIO 18)
Step 13 — ESP32 GPIO18 → Relay3 IN
Step 14 — ESP32 5V → Relay3 VCC
Step 15 — ESP32 GND → Relay3 GND
Step 16 — 5V rail + → Relay3 COM
Step 17 — Relay3 NO → LED3 anode
Step 18 — LED3 cathode → 220Ω resistor → GND rail

Device 4 — Fan 1 (GPIO 19)
Step 19 — ESP32 GPIO19 → Relay4 IN
Step 20 — ESP32 5V → Relay4 VCC
Step 21 — ESP32 GND → Relay4 GND
Step 22 — 5V rail + → Relay4 COM
Step 23 — Relay4 NO → LED4 anode
Step 24 — LED4 cathode → 220Ω resistor → GND rail

Device 5 — Fan 2 (GPIO 21)
Step 25 — ESP32 GPIO21 → Relay5 IN
Step 26 — ESP32 5V → Relay5 VCC
Step 27 — ESP32 GND → Relay5 GND
Step 28 — 5V rail + → Relay5 COM
Step 29 — Relay5 NO → LED5 anode
Step 30 — LED5 cathode → 220Ω resistor → GND rail
