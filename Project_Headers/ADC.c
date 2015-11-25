#include "ADC.h"

//**************************************************
//					ADC DRIVER
//**************************************************

void init_adc(unsigned char bits) // inicializa ADC
{
	SIM_SCGC6 |= SIM_SCGC6_ADC0_MASK;	// habilitamos el puerto ADC0
	ADC0_CFG1 |= ADC_CFG1_MODE(bits) | ADC_CFG1_ADIV(3); // configuramos ADC a cierto valor de bits y la divicion de la frecuencia de conversion
	ADC0_SC1A = ADC_SC1_ADCH(31); // habilitamos en ADCH 
}

//**************************************************
//					ADC FUNCTION
//**************************************************

unsigned short ADC_READ(unsigned char channel) // funcion para leer el ADC
{
	ADC0_SC1A = channel & ADC_SC1_ADCH_MASK; // seleccionamos el canal en el que vamos a leer
	while(ADC0_SC2 & ADC_SC2_ADACT_MASK);  	// mientras se realiza la conversion	
	while(!(ADC0_SC1A & ADC_SC1_COCO_MASK));// cuando se termina la conversion			
	return ADC0_RA; // regresamos el valor de la conversion
}
