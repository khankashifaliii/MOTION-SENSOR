# MOTION-SENSOR
This is my first git repository.
Author - Kashif Ali Khan
# Motion Sensor Using Ultrasonic Sensor (Arduino Project)

> This is my first GitHub project. I built it as part of my final semester work using Arduino Uno and the HC-SR04 sensor.

## 📌 Project Summary
A motion detection system that uses an ultrasonic sensor to measure distance and gives visual (LED) and sound (buzzer) alerts based on object proximity.

## Distance Response Chart

| Distance        | LED Color | Buzzer Intensity         |
|----------------|-----------|--------------------------|
| 0–10 cm        | 🔴 Red    | High beeping             |
| 10–30 cm       | 🟡 Yellow | Medium beeping           |
| 30–60 cm       | 🟢 Green  | Low beeping              |
| > 60 cm        | ❌ OFF    | Silent                   |

## 🔧 Hardware Used
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Red, Yellow, Green LEDs
- Buzzer
- Breadboard & jumper wires

## How It Works
1. Sensor measures distance using ultrasonic waves.
2. LED color and buzzer sound change based on object distance.
3. Everything turns off when distance is more than 60 cm.

## What I Learned
- How to use ultrasonic sensors with Arduino
- Working with LEDs and buzzers
- Conditional programming in C++
- Creating and publishing a GitHub project

## Future Ideas
- Add an LCD to show live distance
- Convert it to a smart home system
- Integrate with a mobile app using Bluetooth



