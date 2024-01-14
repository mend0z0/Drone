
## Latest update

``
Some mechanical and electronic components have been bought. Going to write the OS for Flight controller part...
``

# Quadcopter

Briefly describing, quadcopter is a type of drone that consists of four motors and the idea is to fly remotly over the ground surface at a pre-determined distance. Our project goal is to acquire four motors that can carry and fly a chasie. The effort, at the first place, is to stablize the chassie in the air. Also, In contrast to traditional drone remote controller, the goal of this project is to control the drone by an application that is running on a PC/Raspberry pi.

## Features

- Mini size
- 3MP Camera
- Long and short wireless connection
- OTA Programming


## Tech Stack

### Hardware

#### FlightController
- **MCU:** STM32U545
- **Connection:** SPI, I2C, UART, QSPI
- **PCB Layers:** 6Layers (Controlled Impedance)
- **CAD:** KiCAD

#### RadioController
- **MCU:** ATSAM4SD
- **Connection:** SPI, HSMCI, USB2.0
- **PCB Layers:** 6Layers (Controlled Impedance)
- **CAD:** KiCAD

#### LoRaWANController
- **MCU:** STM32WLE5
- **Connection:** UART
- **PCB Layers:** 6Layers (Controlled Impedance)
- **CAD:** KiCAD

#### USBToLoRaWAN
- **MCU:** STM32WLE5
- **Connection:** UART, USB2.0
- **PCB Layers:** 2Layer/s (None-controlled Impedance)
- **CAD:** KiCAD

### Firmware

#### FlightController
- **OS:** FreeRTOS
- **Programming Language:** C Languagae
- **IDE:** STM32CubeIDE

#### RadioController
- **OS:** FreeRTOS
- **Programming Language:** C Languagae
- **IDE:** Atmel Studio

#### LoRaWANController
- **OS:** FreeRTOS
- **Programming Language:** C Languagae
- **IDE:** STM32CubeIDE

#### USBToLoRaWAN
- **OS:** FreeRTOS
- **Programming Language:** C Languagae
- **IDE:** STM32CubeIDE

### Application

- **Application:** Qt6
- **Operating System:** Linux/Windows
- **Platform:**: Raspberry Pi 400


## Block Diagrams

![SystemDesign](https://github.com/mend0z0/Quadcopter/blob/main/Document/Block%20Diagrams/_FBD_SYS_QuadCopter_v1.0.svg)

![Hardware_FlightController](https://github.com/mend0z0/Quadcopter/blob/main/Document/Block%20Diagrams/_FBD_HW_FlightController_v1.0.svg)

![Hardware_RadioController](https://github.com/mend0z0/Quadcopter/blob/main/Document/Block%20Diagrams/_FBD_HW_RadioController_v1.0.svg)

![Hardware_LoRaWANController](https://github.com/mend0z0/Quadcopter/blob/main/Document/Block%20Diagrams/_FBD_HW_LoRaWANController_v1.0.svg)

![Hardware_USBToLoRaWAN](https://github.com/mend0z0/Quadcopter/blob/main/Document/Block%20Diagrams/_FBD_HW_USBToLoRaWAN_v1.0.svg)

![Firmware_FlightController](https://github.com/mend0z0/Quadcopter/blob/main/Document/Block%20Diagrams/_FBD_FW_FlightController_v1.0.svg)

![Firmware_RadioController](https://github.com/mend0z0/Quadcopter/blob/main/Document/Block%20Diagrams/_FBD_FW_RadioController_v1.0.svg)

![Firmware_LoRaWANController](https://github.com/mend0z0/Quadcopter/blob/main/Document/Block%20Diagrams/_FBD_FW_LoraWANController_v1.0.svg)

![Firmware_USBToLoRaWAN](https://github.com/mend0z0/Quadcopter/blob/main/Document/Block%20Diagrams/_FBD_FW_USBToLoRaWAN_v1.0.svg)


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

