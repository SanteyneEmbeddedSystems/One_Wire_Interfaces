#ifndef ONE_WIRE_PROTOCOL_H
#define ONE_WIRE_PROTOCOL_H

#include <stdint.h>
#include "T_One_Wire_Device_Address.h"

typedef struct {

    void (*Send_Simple_Command) ( 
		T_One_Wire_Device_Address* slave_address,
		uint8_t command );
	
    void (*Send_Write_Command) (
		const T_One_Wire_Device_Address* slave_address,
		uint8_t command,
		const uint8_t message[],
        uint8_t message_length );

    void (*Send_Read_Command) (
		T_One_Wire_Device_Address* slave_address,
		uint8_t command,
		uint8_t message[],
        uint8_t message_length );
	
} One_Wire_Protocol;

#endif