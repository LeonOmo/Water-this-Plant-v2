# Water this Plant v2

A simple autonomous project to monitor soil moisture lvls for my plant, featuring LED feedback and phone alerts when watering is needed.

## Features

- Visual Alerts: 2x LEDs notifying me when the plant needs water (Red = need moisture, Green / Blue = enough moisture).
- Phone Alert: Notifies my phone when the plant needs water.
- Solar Power System: Setup using 2x compact 5V solar panels and 2x batteries, protected by a diode for continuous usage without manual recharging (or constant connection).

## Components 

- Microcontroller: Wemos Lolin D32 
- Sensor: Capacitive Soil Moisture Sensor v1.2
- Power & Solar: 
  - 1x 18650 Li-ion Battery in a holder with JST-PH 2.0 connector
  - 2x 5V / 0.3W Mini Solar Panels (68x36 mm, wired in parallel)
  - 1x 1N5819 Schottky Diode (reverse-current protection)
- LEDs: 1x Green / Blue LED & 1x Red LED
- Resistors: 2x 220 Ohm Resistors
- Connecting everything: Breadboard

## Tools

- Paint: Used for making the idea
- TinkerCAD: Reference made here
- Onshape: Designed the CAD there
- Arduino IDE: Made the firmware here

## Firmware

<img width="1217" height="833" alt="image" src="https://github.com/user-attachments/assets/377e30b6-8e01-42fc-bdce-f94680239b68" />

## CAD

- Case Design

  <img width="430" height="409" alt="Screenshot 2026-10-22 215226" src="https://github.com/user-attachments/assets/da574b9f-b6aa-4f8d-ae25-9ef823bd347d" />

## Extras

- Credits: My friend gave me the idea. Fun project with first time using wifi and the moisture sensor.

## Bonus

- The Idea Sketch

<img width="648" height="535" alt="Screenshot 2026-10-16 181115" src="https://github.com/user-attachments/assets/5811eacb-3cbb-4117-8d36-ee10c5584c9d" />

