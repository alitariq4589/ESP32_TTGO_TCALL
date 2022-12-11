from machine import UART

uart=UART(0,115200)
uart.init(115200, bits=8, parity=None, stop=1)
uart.write('Welcome to ESP32. Congratulations, you have accessed my serial monitor')