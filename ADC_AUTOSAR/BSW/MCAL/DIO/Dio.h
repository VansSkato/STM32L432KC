#ifndef DIO_H//esto va ahuevo
#define DIO_H

#include "Platform_Types.h"


/*
 *
 * Dio es = Digital Input Output
*/




typedef uint32 Dio_ChannelType;
typedef uint32 Dio_PortType;

typedef struct //dice que una mask de 8,16,32
{

}Dio_ChannelGroupType;


typedef uint8 Dio_LevelType;

typedef uint32 Dio_PortLevelType;

//me falta una funcion pero sabe como se haga
//void Dio_ReadChannel();

 Dio_LevelType Dio_ReadChannel (Dio_ChannelType ChannelId);
 void Dio_WriteChannel (Dio_ChannelType ChannelId,Dio_LevelType Level);

#endif
