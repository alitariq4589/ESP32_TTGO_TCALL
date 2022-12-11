from machine import UART

uart=UART(0,115200)

uart.write('Welcome to ESP32. Congratulations, you have accessed my serial monitor')