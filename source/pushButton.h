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
	uint32 state;
	void(*fptrBtnFtn);
//	uint8 next[2];
}BtnStateType;

typedef enum{
	MENU,
	LEER_MEMORIA,
	ESCRIBIR_MEMORIA,
	ESTABLECER_HORA,
	ESTABLECER_FECHA,
	LEER_HORA,
	LEER_FECHA
}BtnFctnType;

void buttonsInit(void);
void menu(void);
void leerMemoria(void);
void escribirMemoria(void);
void establecerHora(void);
void establecerFecha(void);
void leerHora(void);
void leerFecha(void);

#endif /* PUSHBUTTON_H_ */
