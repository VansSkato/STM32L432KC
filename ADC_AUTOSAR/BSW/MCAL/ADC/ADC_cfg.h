#ifndef ADC_CFG_H//esto va ahuevo
#define ADC_CFG_H

#include "ADC.h"
#include "port_cfg.h"


const uint32 CCR = ( ADC_CCR_CKMODE_1);//CCR del ADC
const uint32 CONT = (ADC_CFGR_CONT);//Continuos MODE del ADC
const uint32 SQR1 = (ADC_SQR1_SQ1_0  | ADC_SQR1_SQ1_2);//Aqui activamos el  con el numero 5 porque en las funciones alternativas el ADC1 para el PA0 es In_5 si sumamos 1+4 = 5;
const uint32 DEEP_POWER =(ADC_CR_DEEPPWD);//Deepmode
const uint32 Voltage_regulator = (ADC_CR_ADVREGEN);// ADC voltage regulator enable
const uint32 ADC_calibration = (ADC_CR_ADCAL);//ADC calibration
const uint32 HAB_ADC = (ADC_CR_ADEN);




Adc_ConfigType ConfigADC[] =
{
		{
		ADC1,
		CCR,
		CONT,
		SQR1,
		DEEP_POWER,
		Voltage_regulator,
		ADC_calibration,
		HAB_ADC,
		},


};

Adc_ValueGroupType ad_bfr_gruop;

#endif
