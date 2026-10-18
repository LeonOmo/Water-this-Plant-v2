# Water this Plant v2

A simple autonomous project to monitor soil moisture lvls for my plant, featuring LED feedback and phone alerts when watering is needed.

## Features

- Visual Alerts: 2x LEDs notifying me when the plant needs water (Red = need moisture, Green = enough moisture).
- Phone Alert: Notifies my phone when the plant needs water.
- Solar Power System: Fully autonomous setup using 2x compact 5V solar panels and a 3.7V Li-ion battery, protected by a Schottky diode for continuous usage without manual recharging (or constant connection).

## Components 

- Microcontroller: Wemos Lolin D32 (ESP32 with integrated battery management & JST-PH connector)
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



## CAD

- TinkerCAD Design
- Case Design

## Extras

- Credits: My friend gave me the idea.

## Bonus

- The Idea Sketch
