# Quadcopter

This project is a drone that equipped with four motors (Quadcopter). This project mainly focuses on control system but also has other fancy features like video streaming, clusterability, and autonomous driving. This project would be used for capstone Centennial college project.


## Features

- Small size and Lightweight
- Very silent flight
- Fast maneuverability
- 3MP camera
- Clusterability
- Autonomous driving


## Tech Stack

**Application:** Qt

**MCU:** STM32U545 (Cortex®-M33)

**Firmware:** FreeRTOS

**Wireless Connectivity Protocol:** MQTT

**Interconnection protocol:** CANBus


## Roadmap

### ESC sub-project
- **Designing ESC Hardware**
	1. BLDC driver circuitry
	1. BLDC Voltage & Current measurement circuitry
	1. MCU circuitry
	1. CANBus circuitry
	1. Power-supply circuitry

- **Developing ESC Firmware**
	1. Initializing FreeRTOS and accessing to the required peripherals (ADC, CANBus, PWM/DAC, ...)
	1. A driver code for running BLDC correctly.
	1. A control loop implementation for RPM speed stability.
	1. A driver code for CANBus peripheral and establishing a protocol for communication.
	Improving the code for reaching the maximum speed and the most silent spin.
	
- **Troubleshooting/Debugging ESC project**

### Flight Controller sub-project
- **Designing Flight Controller Hardware**
	1. IMU sensor circuitry
	1. Wifi module circuitry
	1. Camera module circuitry	
	1. CANBus circuitry
	1. MCU circuitry
	1. Power supply circuitry

- **Developing Flight Controller Firmware**
	1. Initializing FreeRTOS and accessing to the required peripherals (CANBus, SPI, ...)
	1. A driver code for IMU Sensor.
	1. A driver for commanding the motors over CANBus.
	1. Implementing control loop for drone stability.
	1. A driver code for Wifi Module.
	1. A driver code for MQTT protocol over Wifi.
	1. Implementing running basic instruction over MQTT and tuning the control loop.
	1. A driver code for camera module.
	1. Displaying camera picture on written app with QT.

- **Troubleshooting/Debugging Flight Controller project**

### Radio Control sub-project
	1.Developing an application with QT
	1.Implementing MQTT protocol with QT
	1.Send/Receive basic commands to/from drone
	1.Displaying the received data from camera module


## Documentation

[Documentation](https://github.com/mend0z0/QuadCopter/tree/main/Doc)


## Used By

This project is used by the following companies:

- Centennial College

## Authors

- [@Siavash Taher Parvar](https://www.github.com/mend0z0)


## Demo

Insert gif or link to demo, I'll use my youtube acc


## Screenshots

![App Screenshot](https://via.placeholder.com/468x300?text=App+Screenshot+Here)
