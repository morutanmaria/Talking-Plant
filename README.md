## Overview

The Smart Plant Monitoring System is an Arduino-based project designed to monitor the environmental conditions of a plant in real time. The system uses multiple sensors to collect data about soil moisture, temperature, humidity, and light intensity, helping ensure optimal plant growth and preventing under- or over-watering.

By continuously analyzing sensor data, the system can notify the user when conditions fall outside optimal ranges or automatically trigger actions such as watering the plant.

## Features

🌡 Temperature Monitoring – Tracks the ambient temperature around the plant.

💧 Soil Moisture Detection – Measures soil hydration to determine when watering is needed.

☀️ Light Intensity Measurement – Detects how much light the plant receives.

💨 Humidity Monitoring – Measures air humidity levels.

⚠️ Alert System – LEDs or buzzer indicate when plant conditions are not optimal.

📟 Real-time Data Display – Sensor readings can be shown via Serial Monitor or an LCD display.

## Hardware Components

Arduino Board (e.g., Arduino Uno)

Soil Moisture Sensor

Temperature & Humidity Sensor (e.g., DHT11 / DHT22)

Light Sensor (LDR + resistor)

Optional: LCD Display

Optional: Water Pump / Relay Module

Breadboard and jumper wires

## System Architecture

Sensors collect environmental data from the plant's surroundings.

Arduino reads sensor values through analog and digital inputs.

The system compares the readings with predefined threshold values.

If a parameter goes outside the optimal range:

An alert is triggered (LED/Buzzer), or

An automatic action (e.g., activating a water pump) can occur.

## Technologies Used

Arduino (C/C++)

Embedded systems

Sensor interfacing

Serial communication

## Possible Improvements

IoT integration for remote monitoring via mobile app.

Data logging for plant growth analysis.

Automatic irrigation system with a pump.

Solar-powered system for energy efficiency.
