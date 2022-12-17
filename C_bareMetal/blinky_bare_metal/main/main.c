// It applies logic 1 on a GPIO pin 13 of Lilygo TTCALL ESP32 module
#define GPIO_FUNC13_OUT_SEL_CFG_REG				*(volatile unsigned long *) 0x3FF44564
#define GPIO_ENABLE_REG				*(volatile unsigned long *) 0x3FF44020
#define IO_MUX_MTCK_REG 			*(volatile unsigned long *) 0x3FF49038
#define GPIO_OUT_REG				*(volatile unsigned long *) 0x3FF44004
void delay(long long unsigned int iterations_squared);

void app_main(void){
	GPIO_FUNC13_OUT_SEL_CFG_REG=0x100;
	IO_MUX_MTCK_REG |= 1<<13;
	GPIO_ENABLE_REG |= 1<<13;
	while (1){
		GPIO_OUT_REG |= 1<<13; //Turn on LED
		delay(3000);
		GPIO_OUT_REG &= ~(1<<13); //Turn off LED
		delay(3000);
	}
}

void delay(long long unsigned int iterations_squared){ //Conventional delay function
	for (unsigned int i=0;i<iterations_squared;i++)
		for (unsigned int j=0;j<iterations_squared;j++);
}
