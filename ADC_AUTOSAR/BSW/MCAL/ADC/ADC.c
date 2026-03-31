#include "ADC.h"





void Adc_Init (const Adc_ConfigType* ConfigPtr)
{
	ADC1_COMMON->CCR &= ~(ADC_CCR_CKMODE_Msk);// Aqui estas limpiado menso
	ADC1_COMMON->CCR |= (ConfigPtr->CCR);

	ADC1->CFGR &= ~(ConfigPtr->CONT);
	ADC1->CFGR |= (ConfigPtr->CONT);

	ADC1->SQR1 = 0;//para limpiarlo
	ADC1->SQR1 |= (ConfigPtr->SQR1);

	ADC1->CR &= ~(ConfigPtr->DEEP_POWER);// Aqui esta negada porque tiene que estar deshabilitado
	//ADC1->CR |= (ConfigPtr->DEEP_POWER); TIENE QUE ESTAR DESHABILITADO

	ADC1->CR |= (ConfigPtr->Voltage_rgulator);

	ADC1->CR |= (ConfigPtr->Calibration);

	ADC1->CR |= (ConfigPtr->HAB_ADC);

	while(!(ConfigPtr->ADC->ISR & (ADC_ISR_ADRDY)));//polling

	ADC1->ISR |= (ADC_ISR_ADRDY);




}

void Adc_StartGroupConversion (Adc_GroupType Group)
{
	if(1==Group)
	{
		ADC1->CR |= (ADC_CR_ADSTART);
	}
}

Std_ReturnType Adc_ReadGroup (Adc_GroupType Group,Adc_ValueGroupType* DataBufferPtr)//esta si lleva un return con valor
//Cuando salga buffer es para mandar los parametros para leerlos
{
	if(1==Group)
	{
		while(!(ADC1->ISR & (ADC_ISR_EOC)));//checar bien bien lo que dice el manual

		ADC1->ISR |= (ADC_ISR_EOC);

		*DataBufferPtr = ADC1->DR;//para leer
	}
	return 0;

}

