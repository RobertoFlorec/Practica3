/*
 * pushButton.c
 *
 *  Created on: 13/11/2017
 *      Author: Roberto
 */
#include <stdio.h>
#include "GPIO.h"
#include "NVIC.h"

void buttonsInit(void){
	GPIO_pinControlRegisterType pinControlRegisterButtons = GPIO_MUX1 |GPIO_PE | GPIO_PS | INTR_FALLING_EDGE;
	GPIO_clockGating(GPIO_C);
	GPIO_pinControlRegister(GPIO_C, BIT0, &pinControlRegisterButtons);
	GPIO_pinControlRegister(GPIO_C, BIT1, &pinControlRegisterButtons);
	GPIO_pinControlRegister(GPIO_C, BIT8, &pinControlRegisterButtons);
	GPIO_pinControlRegister(GPIO_C, BIT9, &pinControlRegisterButtons);
	GPIO_pinControlRegister(GPIO_C, BIT16, &pinControlRegisterButtons);
	GPIO_pinControlRegister(GPIO_C, BIT17, &pinControlRegisterButtons);
	GPIO_dataDirectionPIN(GPIO_C, GPIO_INPUT, BIT0);
	GPIO_dataDirectionPIN(GPIO_C, GPIO_INPUT, BIT1);
	GPIO_dataDirectionPIN(GPIO_C, GPIO_INPUT, BIT8);
	GPIO_dataDirectionPIN(GPIO_C, GPIO_INPUT, BIT9);
	GPIO_dataDirectionPIN(GPIO_C, GPIO_INPUT, BIT16);
	GPIO_dataDirectionPIN(GPIO_C, GPIO_INPUT, BIT17);
	GPIO_clearPIN(GPIO_C, BIT0);
	GPIO_clearPIN(GPIO_C, BIT1);
	GPIO_clearPIN(GPIO_C, BIT8);
	GPIO_clearPIN(GPIO_C, BIT9);
	GPIO_clearPIN(GPIO_C, BIT16);
	GPIO_clearPIN(GPIO_C, BIT17);
	NVIC_enableInterruptAndPriotity(PORTC_IRQ, PRIORITY_10);

}

void menu(void){
	printf("\n1)Leer Memoria I2C");
	printf("\n2)Escribir Memoria I2C");
	printf("\n3)Establecer hora");
	printf("\n4)Establecer fecha");
	printf("\n5)Leer hora");
	printf("\n6)Leer fecha");
}
void leerMemoria(void){
	printf("\nLeyendo memoria");
}
void escribirMemoria(void){
	printf("\nEscribinedo Memoria");
}
void establecerHora(void){
	printf("\nEstableciendo hora");
}
void establecerFecha(void){
	printf("\nEstableciendo fecha");
}
void leerHora(void){
	printf("\nLeyendo hora");
}
void leerFecha(void){
	printf("\nLeyendo fecha");
}


