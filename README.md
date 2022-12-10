# ESP32_TTGO_TCALL
This repository contains the source code(s) for `esp32 TTGO T-CALL module BLYNK v1.4`. Platform used for project is a VSCode extention called `Platformio`.

## Initializing the project  

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
