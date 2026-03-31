#ifndef ADC_H//esto va ahuevo
#define ADC_H

#include "Platform_Types.h"
#include "stm32l4xx.h"

typedef struct{
	//esto no se si esta bien
	ADC_TypeDef * ADC;
	uint32 CCR;
	uint32 CONT;
	uint32 SQR1;
	uint32 DEEP_POWER;
	uint32 Voltage_rgulator;
	uint32 Calibration;
	uint32 HAB_ADC;

}Adc_ConfigType;

typedef uint32 Adc_ChannelType;

typedef uint32 Adc_GroupType;

typedef uint32 Adc_ValueGroupType;

typedef uint32 Adc_PrescaleType;

typedef uint32 Adc_ConversionTimeType;

typedef uint32 Adc_SamplingTimeType;

typedef uint8 Adc_ResolutionType;

typedef enum{
	ADC_IDLE,
	ADC_BUSY,
	ADC_COMPLETED,
	ADC_STREAM_COMPLETED,
}Adc_StatusType;

typedef enum{

	ADC_TRIGG_SRC_SW,
	ADC_TRIGG_SRC_HW,

}Adc_TriggerSourceType;

typedef enum{

	ADC_CONV_MODE_ONESHOT,
	ADC_CONV_MODE_CONTINUOUS,

}Adc_GroupConvModeType;

typedef uint8 Adc_GroupPriorityType;

//typedef implementation_specific Adc_GroupDefType;

typedef uint32 Adc_StreamNumSampleType;

typedef enum{

	ADC_STREAM_BUFFER_LINEAR,
	ADC_STREAM_BUFFER_CIRCULAR,

}Adc_StreamBufferModeType;

typedef enum {

	ADC_ACCESS_MODE_SINGLE,
	ADC_ACCESS_MODE_STREAMING,

}Adc_GroupAccessModeType;

typedef enum{

	ADC_HW_TRIG_RISING_EDGE,
	ADC_HW_TRIG_FALLING_EDGE,
	ADC_HW_TRIG_BOTH_EDGES,

}Adc_HwTriggerSignalType;

typedef uint32 Adc_HwTriggerTimerType;


typedef enum
{

	ADC_PRIORITY_NONE,
	ADC_PRIORITY_HW,
	ADC_PRIORITY_HW_SW,

}Adc_PriorityImplementationType;


typedef enum
{

	ADC_GROUP_REPL_ABORT_RESTART,
	ADC_GROUP_REPL_SUSPEND_RESUME,

}Adc_GroupReplacementType;


typedef enum
{

	ADC_RANGE_UNDER_LOW,
	ADC_RANGE_BETWEEN,
	ADC_RANGE_OVER_HIGH,
	ADC_RANGE_ALWAYS,
	ADC_RANGE_NOT_UNDER_LOW,
	ADC_RANGE_NOT_BETWEEN,
	ADC_RANGE_NOT_OVER_HIGH,

}Adc_ChannelRangeSelectType;

typedef enum
{

	ADC_ALIGN_LEFT,
	ADC_ALIGN_RIGHT,

}Adc_ResultAlignmentType;


typedef enum
{
	//aqui van desde 1 a 255 ()

	ADC_FULL_POWER = 0,

}Adc_PowerStateType;


typedef enum
{

	ADC_SERVICE_ACCEPTED = 0,
	ADC_NOT_INIT = 1,
	ADC_SEQUENCE_ERROR = 2,
	ADC_HW_FAILURE = 3,
	ADC_POWER_STATE_NOT_SUPP = 4,
	ADC_TRANS_NOT_POSSIBLE = 5,

}Adc_PowerStateRequestResultType;

void Adc_Init (const Adc_ConfigType* ConfigPtr);

void Adc_StartGroupConversion (Adc_GroupType Group);

Std_ReturnType Adc_ReadGroup (Adc_GroupType Group,Adc_ValueGroupType* DataBufferPtr);


#endif
