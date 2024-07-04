# Intefacing of temperature sensor MAX6675 with ESP8266 Node MCU


## Content
- 1.[Overview](#overview)
- 2.[Components Required](#components)
- 3.[Project Flow](#project-flow)
- 4.[Circuit Diagram](#circuit-diagram)
- 5
- 





## Overview
- This project is based on ESP8266 Node MCU

## Components 
- 1.ESP8266 Node MCU
- 2.Temperature sensor
- 3.USB cable
- 4.Jumper Wire

 ## Project Flow
  ### 1.Hardware Setup
  #### i.Gather Components
 - ESP8266 NodeMCU
 - Temperature Sensor MAX6675
 - Bread board & Jumper wire
  
  #### ii Hardware connectins
 - VCC of Temperature sensor to 3.3V of NodeMCU
 - Gnd of Temperature sensor to GND of NodeMCU
 - Connect Data pins of Temperature sensor to digital pins on NodeMCU
 - connect the NodeMCU to computrer thru=ough usb cable
   


 
  ### 2.Software Setup
  ##### i. install proper ide
 - Install the VS code 
 - Install the platfomIO extention
 - Creat the new project
 - select the ESP8266 NodeMCU board
 - Write the code in SRC main.cpp file
 - add wifi credentials in code
 - add thingspeak api key and channel no for thingspeak connections
 - ##### install libraries
   a. mathworks/ThingSpeak @ ^2.0.0
  
   b.adafruit/MAX6675 library @ ^1.1.2
  
   c.tzapu/WiFiManager @ ^0.16.0
  
   d. mathworks/ThingSpeak@^2.0.0
  
   e.NewPing
  
   f.ESP8266WiFi
  
   g. bbx10/DNSServer@^1.1.0
  
   h. monitor_speed=115200

   
     
     
  ### Thingspeak field setup
  - creat thingspeak account
  - 
  
- Debug & compile the code
   - Dump the code in Node MCU
   - open the seril monitor to see the result
   - wait untill the the nodeMCU connrcts to the wifi


 ## Circuit Diagram



