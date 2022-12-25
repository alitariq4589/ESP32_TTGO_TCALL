# ESP32_TTGO_TCALL
This repository contains the source code(s) for `esp32 TTGO T-CALL module BLYNK v1.3`.

## For PlatformIO  

The project can be initialized with following command.

```shell
pio init -b <Board ID> # Here Board ID can be obtained by searching for the desirable board in the `Boards` section of `platformio` home.
```
Choose the board as `Espressif ESP32 Dev Module`.  

### Building and running the project
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


## For Eclipse
For eclipse, install esp-idf plugin from eclipse marketplace by going to `help > Eclipse Marketplace...`. After the download is complete install ESP-IDF by going to `Espressif > ESP-IDF Tools manager > Install tools`. After the installation is complete, create new project of type `esp-idf` by going to `File > New > Other... >Espressif IDF Project`  

## Directory Structure
The directory structure source codes are in the following sequence:  

- **Arduino**: This directory contains the source code for ESP32 Lilygo TTGO T-CALL based on arduino
- **C_bareMetal**: This directory contains source code for ESP32 Lilygo TTGO T-CALL based on bare metal programming. But this requires main file to be created in esp-idf project in eclipse
- **Micropython**: This directory contains projects written in micropython and configured on `Thonny` IDE
