// GPIO Registers base addresses
#define GPIO_FUNC1_OUT_SEL_CFG_REG 	*(volatile unsigned long *) 0x3FF44534
#define GPIO_FUNC3_IN_SEL_CFG_REG	*(volatile unsigned long *) 0x3FF4413C
#define GPIO_ENABLE_REG				*(volatile unsigned long *) 0x3FF44020
#define IO_MUX_U0TXD_REG 			*(volatile unsigned long *) 0x3FF49088
#define IO_MUX_U0RXD_REG 			*(volatile unsigned long *) 0x3FF49084
//#define GPIO_OUT_REG				*(volatile unsigned long *) 0x3FF44004 //This is used only for Simple GPIO

//UART0 Registers base addresses
#define UART0_CONFIG0_REG 			*(volatile unsigned long *) 0x3FF40020
#define UART0_CONFIG1_REG 			*(volatile unsigned long *) 0x3FF40024
#define UART0_CLKDIV_REG 			*(volatile unsigned long *) 0x3FF40014
#define UART0_FIFO_REG	 			*(volatile unsigned long *) 0x3FF40000


void delay(long long unsigned int iterations_squared);

void app_main(void){
	// GPIO Register configurations
	GPIO_FUNC1_OUT_SEL_CFG_REG	=	0x0e;  	//Signal 14 for U0TXD
	GPIO_FUNC3_IN_SEL_CFG_REG	=	0x0e;  	//Signal 14 for U0RXD
	IO_MUX_U0TXD_REG 		   	|= 	0x0;	//MCU_SEL should be 0 for U0TXD
	IO_MUX_U0RXD_REG 			|= 	0x0;	//MCU_SEL should be 0 for U0RXD
	GPIO_ENABLE_REG  			|= 	1<<1;   //Enabling GPIO PAD 1
	GPIO_ENABLE_REG  			|= 	1<<3;	//Enabling GPIO PAD 3

	//UART0 Register configurations
	UART0_CONFIG0_REG	|=	0x800001C;
	UART0_FIFO_REG		=	'a';
	UART0_FIFO_REG		=	'b';
	UART0_FIFO_REG		=	'c';
}

void delay(long long unsigned int iterations_squared){ //Conventional delay function
	for (unsigned int i=0;i<iterations_squared;i++)
		for (unsigned int j=0;j<iterations_squared;j++);
}
