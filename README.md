
## Latest update

``
Working on the firmware block diagrams...
``

# Drone

This project is supposed to be a foundation for different types of drones such as Quadcopter, Tricopter, RC cars, Motorcycle, and so on... . The outcome is with a single application we can connect, sync, and or process the collected data from different drones regardless of their type.

## Category

__Robotics__

## Features

- Mini size
- Camera
- Long and short wireless connection
- OTA Programming


## Technology


|Specification|Drone PCB Top|Drone PCB Bottom|
|:---|:---:|:---:|
|<table><tbody><th>## Hardware</th><tr><td>__MCU :__</td> <td> STM32U575 </td></tr> <tr><td>__Connection :__</td> <td> SPI, I2C, UART, QSPI, PWM </td></tr> <tr><td>__PCB Layers :__</td> <td> 4Layers (Controlled Impedance) </td></tr> <tr><td>__Board Dimensions :__ </td> <td> VALUE </td></tr> <tr><td>__CAD :__</td> <td> KiCAD </td></tr></tbody></table><table><tbody><tr><td>__Programming Language :__</td> <td> CLan </td></tr> <tr><td>__OS :__</td> <td> FreeRTOS </td></tr> <tr><td>__IDE :__</td> <td> STM32CubeIDE </td></tr> </tbody></table>|![Latest Version_Top](https://github.com/mend0z0)|![Latest Version_Bottom](https://github.com/mend0z0)|






### Hardware

#### DroneController (Equilibrium & Radio Controller)
- **MCU (Equilibrium Controller):** STM32U575
- **MCU (Radio Controller):** STM32WLE5
- **Connection:** SPI, I2C, UART, QSPI, PWM
- **PCB Layers:** 4Layers (Controlled Impedance)
- **CAD:** KiCAD

#### Camera
- **MCU:** ...
- **Connection:** SPI, I2C, MIPI, SDIO
- **PCB Layers:** 4Layers (Controlled Impedance)
- **CAD:** KiCAD

#### LoRaWAN Gateway
- **MCU:** STM32WLE5
- **Connection:** UART, USB2.0
- **PCB Layers:** 4Layer/s (Controlled Impedance)
- **CAD:** KiCAD

### Firmware

#### DroneController (Equilibrium & Radio Controller)
- **OS:** FreeRTOS
- **Programming Language:** C Languagae
- **IDE:** STM32CubeIDE

#### Camera
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

|![_ASMView_Top_Quadcopter](https://github.com/mend0z0/Quadcopter/blob/main/Document/Glamour%20shots/_ASMView_Top_Quadcopter_v1.0.svg)|![_ASMView_Bottom_Quadcopter](https://github.com/mend0z0/Quadcopter/blob/main/Document/Glamour%20shots/_ASMView_Bottom_Quadcopter_v1.0.svg)|![_App_Quadcopter_v1.0_](https://github.com/mend0z0/Quadcopter/blob/main/Document/Glamour%20shots/_ASMView_Top_Quadcopter_v1.0.svg)|![FULLDRONE_Screenshot](https://github.com/mend0z0/Quadcopter/blob/main/Document/Glamour%20shots/_ASMView_Top_Quadcopter_v1.0.svg)|![FULLDRONE_Screenshot](https://github.com/mend0z0/Quadcopter/blob/main/Document/Glamour%20shots/_ASMView_Top_Quadcopter_v1.0.svg)|![FULLDRONE_Screenshot](https://github.com/mend0z0/Quadcopter/blob/main/Document/Glamour%20shots/_ASMView_Top_Quadcopter_v1.0.svg)|
|:--:| :--:| :--:| :--: | :--:| :--: |
| Drone PCB Top | Drone PCB Bottom | Camera PCB Top | Camera PCB Bottom | LoRaWAN Gateway PCB Top | LoRaWAN Gateway PCB Bottom |

### Final Device

![_Final Device_](https://github.com/mend0z0)

## Demo

Not ready yet for demo...

## Author

- [@Siavash Taher Parvar](https://www.linkedin.com/in/mend0z0)


![Logo](https://github.com/mend0z0/Quadcopter/blob/main/Logo.png)

