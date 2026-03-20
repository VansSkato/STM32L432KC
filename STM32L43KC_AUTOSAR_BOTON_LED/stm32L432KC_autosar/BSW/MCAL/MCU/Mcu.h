#ifndef MCU_H//esto va ahuevo
#define MCU_H


#include "Platform_Types.h"



typedef struct
{
	uint32 RCC_AHB2ENR;

} Mcu_ConfigType;

typedef enum
{
	num1,
}Mcu_PllStatusType;

typedef uint8 Mcu_ClockType;

typedef enum
{
	num2,
}Mcu_ResetType;

typedef uint8 Mcu_RawResetType;

typedef uint8 Mcu_ModeType;

typedef uint8 Mcu_RamSectionType;


typedef enum
{
	num3,
}Mcu_RamStateType;


void Mcu_Init (const Mcu_ConfigType* ConfigPtr);

#endif /* MCU_H */ //esto va ahuevo
