
## Latest update

``
Working on the block diagrams...
``

# Drone

This project is supposed to be a foundation for different types of drones such as Quadcopter, Tricopter, RC cars, Motorcycle, and so on... . The outcome is with a single application we can connect, sync, and or process the collected data from different drones regardless of their type.

## Category

__Robotics__

## Features

- Mini size
- VGA Camera
- Long and short wireless connection
- OTA Programming


## Tech Stack

### Hardware

#### DroneController (Equilibrium & Radio Controller)
- **MCU (Equilibrium Controller):** STM32U575
- **MCU (Radio Controller):** STM32WLE5
- **Connection:** SPI, I2C, UART, QSPI, DCMI, PWM
- **PCB Layers:** 6Layers (Controlled Impedance)
- **CAD:** KiCAD

#### LoRaWAN Gateway
- **MCU:** STM32WLE5
- **Connection:** UART, USB2.0
- **PCB Layers:** 2Layer/s (None-controlled Impedance)
- **CAD:** KiCAD

### Firmware

#### DroneController (Equilibrium & Radio Controller)
- **OS:** FreeRTOS
- **Programming Language:** C Languagae
- **IDE:** STM32CubeIDE

#### LoRaWAN Gateway
- **OS:** FreeRTOS
- **Programming Language:** C Languagae
- **IDE:** STM32CubeIDE

### Application

- **IDE:** Qt6
- **Operating System:** Windows (64-bit)
- **Device:** Laptop

## Block Diagrams

![SystemDesign](https://github.com/mend0z0/Quadcopter/blob/main/Document/Block%20Diagrams/_FBD_SYS_Drone_v1.0.svg)

## Glamour Shots

|![_ASMView_Top_Quadcopter](https://github.com/mend0z0/Quadcopter/blob/main/Document/Glamour%20shots/_ASMView_Top_Quadcopter_v1.0.svg)|![_ASMView_Bottom_Quadcopter](https://github.com/mend0z0/Quadcopter/blob/main/Document/Glamour%20shots/_ASMView_Bottom_Quadcopter_v1.0.svg)|![_MECH_Quadcopter_v1.0_](https://github.com/mend0z0/Quadcopter/blob/main/Document/Glamour%20shots/_ASMView_Top_Quadcopter_v1.0.svg)|![App Screenshot](https://github.com/mend0z0/Quadcopter/blob/main/Document/Glamour%20shots/_ASMView_Top_Quadcopter_v1.0.svg)|
|:--:| :--:| :--:| :--: |
| PCB Top View | PCB Bottom View | Application Screen | Complete Drone |

### Final Device

![_Quadcopter_](https://github.com/mend0z0)

## Demo

Not ready yet for demo...

## Author

- [@Siavash Taher Parvar](https://www.linkedin.com/in/mend0z0)

## Support

![Logo](https://github.com/mend0z0/Quadcopter/blob/main/Logo.png)

