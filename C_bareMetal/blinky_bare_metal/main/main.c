// It applies logic 1 on GPIO pin 2
#define GPIO_FUNC2_OUT_SEL_CFG_REG 	*(volatile unsigned long *) 0x3FF44538
#define GPIO_ENABLE_REG				*(volatile unsigned long *) 0x3FF44020
#define IO_MUX_GPIO0_REG			*(volatile unsigned long *) 0x3FF49044
#define GPIO_OUT_REG				*(volatile unsigned long *) 0x3FF44004
#define GPIO_OUT_W1TS_REG			*(volatile unsigned long *) 0x3FF44008
#define GPIO_ENABLE_W1TS_REG		*(volatile unsigned long *) 0x3FF44024

void app_main(void){
	GPIO_FUNC2_OUT_SEL_CFG_REG=0x100;
	GPIO_ENABLE_W1TS_REG |= 1<<2;
	GPIO_ENABLE_REG |= 1<<2;
	GPIO_OUT_W1TS_REG |=1<<2;
	GPIO_OUT_REG|=1<<2;
}