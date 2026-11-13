# Water this Plant v2

This is an upgrade the v1 of WtP - a simple project to monitor soil moisture lvls for my plant, featuring LED feedback and phone alerts when watering is needed. Uses small solar panels for recharging the batteries and a sleep mode for less energie usage

## Features

- Visual Alerts: 2x LEDs notifying me when the plant needs water (Red = need moisture, Green / Blue = enough moisture).
- Phone Alert: Notifies my phone when the plant needs water.
- Solar Power System: Setup using 2x compact 5V solar panels and a battery, protected by a diode for continuous usage without manual recharging (or constant connection).

## Components 

- Microcontroller: Wemos Lolin D32 
- Sensor: Capacitive Soil Moisture Sensor v1.2
- Power & Solar: 
  - 1x Rechargeable battery
  - 1x 5V / 0.3W Mini Solar Panels (68x36 mm)
  - 1x Diode (reverse current protection)
- LEDs: 1x Green / Blue LED & 1x Red LEDhttps://github.com/LeonOmo/Water-this-Plant-v2/settings
- Resistors: 2x 220 Ohm Resistors
- Connecting everything: PCB

## Tools

- Paint: Used for making the idea
- TinkerCAD: Reference made here
- Onshape: Designed the CAD there
- Arduino IDE: Made the firmware here
- KiCAD: PCB Design

## Schematic

<img width="682" height="446" alt="Screenshot 2026-11-09 142720" src="https://github.com/user-attachments/assets/5aee4f21-2fcc-4b36-9ad8-55b423b26a0b" />

## PCB

<img width="493" height="660" alt="Screenshot 2026-11-09 143021" src="https://github.com/user-attachments/assets/faf6fa0d-33bc-45c8-a814-ee131bb7210c" />
<img width="502" height="629" alt="Screenshot 2026-11-09 142949" src="https://github.com/user-attachments/assets/1f93d3dc-9848-4e3c-b54a-aae5d0a2e4cd" />

## Firmware

<img width="1217" height="833" alt="image" src="https://github.com/user-attachments/assets/377e30b6-8e01-42fc-bdce-f94680239b68" />

## CAD

- Case Design
https://cad.onshape.com/documents/1d40b63780d7c86f761a8abb/w/1eb81e265bd99f0ddb002a3f/e/59044aae10a250925d74491d?renderMode=0&uiState=6ada7ccf6d0bc2ecbc7e4ee0

<img width="669" height="537" alt="image" src="https://github.com/user-attachments/assets/882da98b-97e2-4ed6-adb6-75c9468adb60" />
<img width="438" height="555" alt="image" src="https://github.com/user-attachments/assets/1ef82ad3-1ff4-4b07-8227-e4c0a01a6c0b" />



## Extras

- Credits: My friend gave me the idea. Fun project with first time using wifi and the moisture sensor.
- OmoCat: Silkscreen on the PCB (Mewo)

## Bonus

- The Idea Sketch

<img width="648" height="535" alt="Screenshot 2026-10-16 181115" src="https://github.com/user-attachments/assets/5811eacb-3cbb-4117-8d36-ee10c5584c9d" />

