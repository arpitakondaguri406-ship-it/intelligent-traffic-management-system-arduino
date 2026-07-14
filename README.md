# Intelligent Traffic Management System using Arduino

## Project Overview

This project simulates an intelligent traffic management system using an Arduino Uno. It controls traffic signals for two roads and provides emergency vehicle priority using push buttons.

## Features

- Two-road traffic signal simulation
- Red, Yellow, and Green LEDs
- Emergency vehicle priority
- Push button control
- Arduino Uno based implementation
- Wokwi simulation

## Components Used

- Arduino Uno
- 6 LEDs
- 6 × 220Ω Resistors
- 2 Push Buttons
- Jumper Wires

## Pin Connections

| Component | Arduino Pin |
|-----------|-------------|
| Road 1 Red | D2 |
| Road 1 Yellow | D3 |
| Road 1 Green | D4 |
| Road 2 Red | D5 |
| Road 2 Yellow | D6 |
| Road 2 Green | D7 |
| Button 1 | D8 |
| Button 2 | D9 |

## Working

### Normal Operation

1. Road 1 Green ON, Road 2 Red ON
2. Road 1 Yellow ON
3. Road 1 Red ON, Road 2 Green ON
4. Road 2 Yellow ON
5. Repeat

### Emergency Mode

- Press Button 1 → Road 1 gets Green for 5 seconds.
- Press Button 2 → Road 2 gets Green for 5 seconds.

## Technologies Used

- Arduino IDE
- Embedded C++
- Wokwi Simulator

## Learning Outcomes

- Digital Input and Output
- INPUT_PULLUP Configuration
- LED Control
- Push Button Interface
- Embedded System Programming
- Traffic Signal Logic

## Project Images

### Circuit Diagram

![Circuit](images/circuit.png)

### Output

![Output](images/output1.png)

## Author

Arpita Kondaguri
ECE Student
