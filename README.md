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

**Interconnection protocol: CANBus


## Roadmap

### ESC sub-project
- Designing ESC Hardware
	BLDC driver circuitry
	BLDC Voltage & Current measurement circuitry
	MCU circuitry
	CANBus circuitry
	Power-supply circuitry

- Developing ESC Firmware
	Peripherals: ADC, CANBus, PWM/DAC, ...
	A driver code for running BLDC correctly.
	A control loop implementation for RPM speed stability.
	A driver code for CANBus peripheral and establishing a protocol for communication.
	Improving the code for reaching the maximum speed and the most silent spin.
	
- Troubleshooting/Debugging ESC project

### Flight Controller sub-project
- Designing Flight Controller Hardware
	IMU sensor circuitry
	Wifi module circuitry
	Camera module circuitry	
	CANBus circuitry
	MCU circuitry
	Power supply circuitry

- Developing Flight Controller Firmware
	Peripherals: CANBus, SPI, ...
	A driver code for IMU Sensor.
	A driver for commanding the motors over CANBus.
	Implementing control loop for drone stability.
	A driver code for Wifi Module.
	A driver code for MQTT protocol over Wifi.
	Implementing running basic instruction over MQTT and tuning the control loop.
	A driver code for camera module.
	Displaying camera picture on written app with QT.

- Troubleshooting/Debugging Flight Controller project

### Radio Control sub-project
- Developing an application with QT
- Implementing MQTT protocol with QT
- Send/Receive basic commands to/from drone
- Displaying the received data from camera module


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
