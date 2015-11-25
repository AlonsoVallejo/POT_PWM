#ifndef ADC_H_
#define ADC_H_

#include "derivative.h"

//**************************************************
//					PINS FOR ADC INPUTS
//**************************************************

// definicion de los puertos que se se pueden usar para lectura de ADC
#define PTB0 (8)
#define PTB1 (9)
#define PTB2 (12)
#define PTB3 (13)
#define PTC2 (11)
#define PTC1 (15)

// definicion para la configuracion de la resolucion del ADC

#define Eight  	(0)
#define Ten    	(1)
#define Twelve 	(2)
#define Sixteen (3)

//**************************************************

void init_adc(unsigned char);
unsigned short ADC_READ(unsigned char);
#endif /* ADC_H_ */
