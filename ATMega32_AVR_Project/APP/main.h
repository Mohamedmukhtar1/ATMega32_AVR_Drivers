/*
 * main.h
 *
 * Created: 2022-05-07 06:26:45 PM
 *  Author: Eng- Mohamed Mokhtar
 */ 

#ifndef MAIN_H_
#define MAIN_H_

/***************_APP_INCLUDES_*****************************/
#include "APP_STD_Types.h"
#include "APP_BIT_MATH.h"

/***************_MyApp_INCLUDES_***************************/

/***************_HAL_INCLUDES_*****************************/

/***************_MCAL_INCLUDES_****************************/
#include "MCAL_GPIO.h"
#include "MCAL_ADC.h"

/***************_AVR_INCLUDES_*****************************/
#define  F_CPU 16000000UL  // 16 MHz (UL == unsigned long - [U32])
#include <util/delay.h>

/***************_main.c_FUNCTION_PROTOTYPE_****************/

#endif /* MAIN_H_ */