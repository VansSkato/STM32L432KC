#ifndef PORT_H//esto va ahuevo
#define PORT_H

#include "Platform_Types.h"
#include "stm32l4xx.h"

typedef struct
 {
	GPIO_TypeDef * Port;
	uint32 MODER;
	uint32 Direction;
	uint32 size;

 }Port_ConfigType;//Aqui se configuran los Ports

typedef uint32 Port_PinType;

typedef enum
{
	NUM1,
}Port_PinDirectionType;

typedef uint32 Port_PinModeType;

void Port_Init (const Port_ConfigType* ConfigPtr);

#endif /* PORT_H */
