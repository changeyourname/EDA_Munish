#include "xparameters.h"
#include "xgpio.h"

#define LED_CHANNEL 1
#define GPIO_EXAMPLE_DEVICE_ID XPAR_AXI_GPIO_0_DEVICE_ID

XGpio Gpio;

int main(void)
{
	int Status;

	u32 value = 0;
	u32 period = 0;
	u32 brightness = 0;

	Status = XGpio_Initialize(&Gpio, GPIO_EXAMPLE_DEVICE_ID);
	if (Status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	XGpio_DiscreteWrite(&Gpio, LED_CHANNEL, 0);

	while (1) {
		print("Please select the Brightness between 0 and 9\n\r");
		value = inbyte();

		period = value - 0x30;
		xil_printf("Brightness Level %d selected\n\r", period);

		brightness = period * 110000;
		XGpio_DiscreteWrite(&Gpio, LED_CHANNEL, brightness);
	}

	return XST_SUCCESS;
}