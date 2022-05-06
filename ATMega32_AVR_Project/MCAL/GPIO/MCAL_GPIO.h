/*
 * MCAL_GPIO.h
 *
 * Created: 2022-05-06 04:01:23 PM
 *  Author: Eng- Mohamed Mokhtar
 */ 

#ifndef MCAL_GPIO_H_
#define MCAL_GPIO_H_
/***************APP INCLUDES**************/
#include "APP_STD_Types.h"
#include "APP_BIT_MATH.h"

/***************MCAL INCLUDES*************/
#include "MCAL_GPIO_CFG.h"
#include "MCAL_GPIO_REG.h"

/*****************_Macros_Configuration_*********/
#define	GPIO_OUTPUT		(U8)1	// For DDRx Register
#define	GPIO_INPUT		(U8)0	// For DDRx Register
#define	GPIO_LOW		(U8)0	// For PORTx Register
#define	GPIO_HIGH		(U8)1   // For PORTx Register
#define	INTERNAL_PULLUP_RESISTOR	(U8)0	
#define	EXTERNAL_PULLUP_RESISTOR	(U8)1	

/***************MCAL_GPIO.c FUNCTION PROTOTYPE****************/
void MCAL_GPIO_Init_Pin_Mode(U8 GPIOx, U8 GPIO_PIN_x, U8 Pin_Config_IO);
void MCAL_GPIO_Write_Pin(U8 GPIOx, U8 GPIO_PIN_x, U8 Pin_OP_State_HiLw);
U8 MCAL_GPIO_Read_Pin(U8 GPIOx, U8 GPIO_PIN_x);
U8 MCAL_GPIO_Read_Port(U8 GPIOx);
void MCAL_GPIO_Toggle_Pin(U8 GPIOx, U8 GPIO_PIN_x);
void MCAL_GPIO_Input_Pin_Config(U8 GPIOx, U8 GPIO_PIN_x, U8 Pin_Config);
	
#endif /* MCAL_GPIO_H_ */