# ESP32_TTGO_TCALL
This repository contains the source code(s) for `esp32 TTGO T-CALL module BLYNK v1.4`.

## For PlatformIO  

The project can be initialized with following command.

```shell
pio init -b <Board ID> # Here Board ID can be obtained by searching for the desirable board in the `Boards` section of `platformio` home.
```
Choose the board as `Espressif ESP32 Dev Module`.  

## Building and running the project
The project can be built and run at the same time with following command:

```shell
pio run -t upload
```

## For MicroPython

For micropython, thonny is used. Install thonny on linux and flash the device with firmware.  
For flashing the device with firmware, follow the steps below:  

- Download the firmware for ESP32 from micropython page (it is included in the repository)
- Open thonny editor and go to `Run > Configure Interpreter...`
- Click on `install or update micropython`
- Select `.bin` firmware file and select the port with which the device is conneceted (also erase the flash)
