# Water this Plant v2

This is an upgrade the v1 of WtP - a simple project to monitor soil moisture lvls for my plant, featuring LED feedback and phone alerts when watering is needed. Uses small solar panels for recharging the batteries and a sleep mode for less energie usage

## Why does it exist?

- Responsibility: I have a plant of my own, and instead of watering it randomly, I want to water it only when it really needs water. That way I can take better care of it.
- Sensors: I've been building projects with many different sensors so that I can work with any kind of sensor.
- Phone messages: This is the first project where I can get messages on my phone

## Features

- Visual Alerts: 2x LEDs notifying me when the plant needs water (Red = need moisture, Green / Blue = enough moisture).
- Phone Alert: Notifies my phone when the plant needs water.
- Solar Power System: Setup using a 5V solar panels and a battery, protected by a diode for continuous usage without manual recharging (or constant connection).

## Components 

- Microcontroller: Wemos Lolin D32 
- Sensor: Capacitive Soil Moisture Sensor v1.2
- Power & Solar: 
  - 1x Rechargeable battery
  - 1x 5V / 0.3W Mini Solar Panels (68x36 mm)
  - 1x Diode (reverse current protection)
- LEDs: 1x Green / Blue LED & 1x Red LED
- Resistors: 2x 220 Ohm Resistors
- Connecting everything: PCB

## BOM

| Component | Description |
| :--- | :--- |
| Microcontroller | ESP32 Wemos Lolin D32 |
| Mini Solar Panel 5V | Automaticly charges the battery if the sun shines |
| 3.7V Li-Ion Battery | Battery so i doesnt need to be pluged in all the time |
| 5mm LEDs | Feedback if your plant needs water |
| Capacitive Soil Moisture Sensor | Sensor for moisture detection |
| Custom PCB | Connects everything |

## Tools

- Paint: Used for making the idea
- TinkerCAD: Reference made here
- Onshape: Designed the CAD there
- Arduino IDE: Firmware
- KiCAD: PCB Design

## Schematic

<img width="682" height="446" alt="Screenshot 2026-11-09 142720" src="https://github.com/user-attachments/assets/5aee4f21-2fcc-4b36-9ad8-55b423b26a0b" />

## PCB

<img width="406" height="547" alt="Screenshot 2026-11-26 174558" src="https://github.com/user-attachments/assets/85771647-429f-4b96-8dcb-adab4e65562d" />
<img width="435" height="580" alt="Screenshot 2026-11-26 174542" src="https://github.com/user-attachments/assets/e2ac17a9-6120-4a82-b565-a7862434a15f" />

## Firmware

<img width="1217" height="833" alt="image" src="https://github.com/user-attachments/assets/377e30b6-8e01-42fc-bdce-f94680239b68" />

## CAD

- Case Design
https://cad.onshape.com/documents/1d40b63780d7c86f761a8abb/w/1eb81e265bd99f0ddb002a3f/e/59044aae10a250925d74491d?renderMode=0&uiState=6ada7ccf6d0bc2ecbc7e4ee0

<img width="329" height="452" alt="Screenshot 2026-11-26 174809" src="https://github.com/user-attachments/assets/c67a20cd-ae38-4075-9fd7-a21247b25479" />
<img width="640" height="448" alt="Screenshot 2026-11-26 174756" src="https://github.com/user-attachments/assets/b3207055-2ee2-4fff-8b14-0cfd8fa7322c" />

## Extras

- Credits: My friend gave me the idea. Fun project with first time using wifi and the moisture sensor.
- OmoCat: Silkscreen on the PCB (Only on my PCB not in the files)

## Bonus

The Build Guide

<img width="1152" height="1910" alt="Build Guide" src="https://github.com/user-attachments/assets/355440b7-f4e1-4d08-8c5d-b5963c633e9c" />

- The Idea Sketch

<img width="648" height="535" alt="Screenshot 2026-10-16 181115" src="https://github.com/user-attachments/assets/5811eacb-3cbb-4117-8d36-ee10c5584c9d" />

