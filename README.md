# Introduction 
This program begins with user keys in G-Code command in Teraterm interface. Data will then be send to STM32CubeMx via USB CDC communication to be used to execute movements on the Stepper Motor. Below shows some screenshots on how it actually look like.
![pic12](img/pic12.jpg)

# 1. Software and Hardware requirements 
Git version 2.17.1.windows.2 is used for implementing C Language code along with Unit Test to validate the each function performs as designed 
Teraterm 4.99 is used here to act as an interface for user to key in the require commands to execute actions
STM32CubeMX 4.1 is used to implement C Language code to configure microcontroller peripherals on STM32 Microcontroller \
The STM Microcontroller used here is STM32F103C8T6 \
Other hardware components required here are : 
1) Breadboard 
2) STLINK 
3) 3 Motor Driver 
4) 3 Stepper Motor 
5) Potential Meter 

# 2. Topics
1. [G-Code Extraction](https://github.com/AndyIsMe/3D_PCB_Laser_Printer/tree/DrawLine/Src/GcodeExtraction). Information about G-Code can be found [here](https://en.wikipedia.org/wiki/G-code)
2. [MotorInfo Setup configuration and Motor Stepping](https://github.com/AndyIsMe/3D_PCB_Laser_Printer/tree/DrawLine/Src/StepperMotor)
3. [Integration of (1) and (2)](https://github.com/AndyIsMe/3D_PCB_Laser_Printer/tree/DrawLine/Src)
    
