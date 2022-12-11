import time
from machine import Pin

led=Pin(13,Pin.OUT)
while True:
    led.value(1)
    time.sleep_ms(1000) #One second delay
    led.value(0)
    time.sleep_ms(1000) #One second delay