#include "main.h"
#include "tpm.h"
	int potval;

int main(void)
{
TPM_init_PWM();
	for(;;) 
	{	   
		set_TPM_CnV(120);
	}
}
