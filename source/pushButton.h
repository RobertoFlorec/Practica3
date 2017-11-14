/*
 * pushButton.h
 *
 *  Created on: 13/11/2017
 *      Author: Roberto
 */

#ifndef PUSHBUTTON_H_
#define PUSHBUTTON_H_

#include "DataTypeDefinitions.h"

typedef struct{
	uint32 out;
	void(*fptrBtnFtn)(uint32);
	uint8 next[8];
}BtnStateType;

typedef enum{
	MENU,
	LEER_MEMORIA,
	ESCRIBIR_MEMORIA,
	ESTABLECER_HORA,
	ESTABLECER_FECHA,
	FORMATO_HORA,
	LEER_HORA,
	LEER_FECHA,
	COMUNICACION
}BtnFctnType;

#endif /* PUSHBUTTON_H_ */
