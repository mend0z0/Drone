
## Latest update

``
Some mechanical and electronic components have been bought. Going to write the OS for Flight controller part...
``

# Quadcopter

Briefly, a quadcopter is a type of drone that consists of four motors and the idea is to fly remotely over the ground surface at a pre-determined distance. Our project goal is to acquire four motors that can carry and fly a chassis. The effort, in the first place, is to stabilize the chassis in the air. Also, In contrast to the traditional drone remote controller, the goal of this project is to control the drone with an application that is running on a PC/Raspberry Pi.

## Category

__Robotics__

## Features

- Mini size
- VGA Camera
- Long and short wireless connection
- OTA Programming


## Tech Stack

### Hardware

#### DroneController (Flight, Radio,and LoRaWAN Controller)
- **MCU (Flight, Radio):** STM32U575
- **MCU (LoRaWAN):** STM32WLE5
- **Connection:** SPI, I2C, UART, QSPI, DCMI
- **PCB Layers:** 6Layers (Controlled Impedance)
- **CAD:** KiCAD

#### USBToLoRaWAN
- **MCU:** STM32WLE5
- **Connection:** UART, USB2.0
- **PCB Layers:** 2Layer/s (None-controlled Impedance)
- **CAD:** KiCAD

### Firmware

#### DroneController (Flight, Radio,and LoRaWAN Controller)
- **OS:** FreeRTOS
- **Programming Language:** C Languagae
- **IDE:** STM32CubeIDE

#### USBToLoRaWAN 
- **OS:** FreeRTOS
- **Programming Language:** C Languagae
- **IDE:** STM32CubeIDE

### Application

- **IDE:** Qt6
- **Operating System:** Raspberry Pi OS (64-bit)
- **Device:** Raspberry Pi 400

### Mechanical

- **CAD:** Solid Edge
- **Printing Method:** 3D Printing

## Block Diagrams

![SystemDesign](https://github.com/mend0z0/Quadcopter/blob/main/Document/Block%20Diagrams/_FBD_SYS_QuadCopter_v1.0.svg)

## Screenshots

### Hardware

#### CAD View

![_CADView_Drone](https://github.com/mend0z0)

![_CADView_USBToLoRaWAN](https://github.com/mend0z0)

#### 3D_View

![_3DView_Top_Drone](https://github.com/mend0z0)

![_3DView_Bottom_Drone](https://github.com/mend0z0)

![_3DView_Top_USBToLoRaWAN](https://github.com/mend0z0)

![_3DView_Bottom_USBToLoRaWAN](https://github.com/mend0z0)
 
#### Assembled Hardware

![_ASMView_Top_Drone](https://github.com/mend0z0)

![_ASMView_Bottom_Drone](https://github.com/mend0z0)

![_ASMView_Top_USBToLoRaWAN](https://github.com/mend0z0)

![_ASMView_Bottom_USBToLoRaWAN](https://github.com/mend0z0)

### Mechanical CAD View
![_CADView_MECH](https://github.com/mend0z0/Quadcopter/blob/main/Document/Media%20Content/Hardware%20Pictures/CAD%20View%20Mechanical/_CADView_MECH_Quadcopter_v1.0.png)

### Final Device
![_QUADCOPTER_](https://github.com/mend0z0)

### Application
![App Screenshot](https://github.com/mend0z0)


## Demo

Insert gif or link to demo, it'll be my youtube channel

## LOGO

![Logo](https://github.com/mend0z0/Quadcopter/blob/main/Logo.png)


## Author

- [@Siavash Taher Parvar](https://www.linkedin.com/in/mend0z0)


## Support

[Support Link](https://github.com/sponsors/mend0z0)

