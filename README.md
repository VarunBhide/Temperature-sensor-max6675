# Intefacing of temperature sensor MAX6675 with ESP8266 Node MCU


## Content
- 1.[Overview](#overview)
- 2.[Components Required](#components-reaquired)
- 3.[Project Flow](#project-flow)
- 4.[Circuit Diagram](#circuit-diagram)
- 5.[Summary](#summary)
- 





## Overview
- This project is based on ESP8266 Node MCU

## Components Reaquired 
- ESP8266 Node MCU
- Temperature sensor
- USB cable
- Jumper Wire
- Bread Board

 ## Project Flow
  ### 1.Hardware Setup
  #### i.Gather Components
 - ESP8266 NodeMCU
 - Temperature Sensor MAX6675
 - Bread board & Jumper wire
 - USB cable
  
  #### ii Hardware connectins
 - VCC of Temperature sensor to 3.3V of NodeMCU
 - Gnd of Temperature sensor to GND of NodeMCU
 - Connect Data pins of Temperature sensor to digital pins on NodeMCU
 - connect the NodeMCU to computrer thruough usb cable
   


 
  ### 2.Software Setup
  #### i. install Required ide
 - Install the VS code 
 - Install the platfomIO extention
 - Creat the new project
 - select the ESP8266 NodeMCU board
 - Install  required libraries


   
     
 - #### ii.Thingspeak  Setup
 - open Thingspeak
 - Creat new channel
 - select  no of fields required
 - Add api key and and chnnel no in source code

 - #### iii.Wifi Setup
 - Turn on the Wifi
 - Add SSID and passward in source code
 - 
 S
 
 - 
  
  - 
  
- Debug & compile the code
   - Dump the code in Node MCU
   - open the seril monitor to see the result
   - wait untill the the nodeMCU connrcts to the wifi


 ## Circuit Diagram



