#include "mdk.h"
// // Code not complete !
// #define GPIO_FUNC13_OUT_SEL_CFG_REG *(volatile unsigned long *) 0x3FF44564
// #define GPIO_ENABLE_REG             *(volatile unsigned long *) 0x3FF44020
// #define IO_MUX_GPIO13_REG           *(volatile unsigned long *) 0x3FF49044
// #define GPIO_OUT_REG                *(volatile unsigned long *) 0x3FF44004
// #define GPIO_ENABLE_REG             *(volatile unsigned long *) 0x3FF44020

// void app_main() {
//     GPIO_ENABLE_REG             |= 0b10000000000000;
//     GPIO_FUNC13_OUT_SEL_CFG_REG |= 0x100;
//     GPIO_OUT_REG                |= 0b10000000000000;
//     IO_MUX_GPIO13_REG           |= 0b10000000000000;
// }

static int led_pin = LED1;  // To override: make EXTRA_CFLAGS=-DLED1=5
static int led_state = 0;

void app_main(void) {
  gpio_output(led_pin);

  for (;;) {
    printf("LED: %d\n", led_state);  // Print current state to console
    gpio_write(led_pin, led_state);  // Blink an LED
    led_state = !led_state;          // Toggle state
    delay_ms(500);                   // Delay a bit
  }
}