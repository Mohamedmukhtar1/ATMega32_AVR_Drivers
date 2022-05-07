/*
 * MCAL_ADC.h
 *
 * Created: 2022-05-06 08:54:20 PM
 *  Author: Eng- Mohamed Mokhtar
 */ 

#ifndef MCAL_ADC_H_
#define MCAL_ADC_H_

/***************_APP_INCLUDES_*****************************/
#include "APP_STD_Types.h"
#include "APP_BIT_MATH.h"

/***************_MCAL_INCLUDES_****************************/
#include "MCAL_ADC_CFG.h"
#include "MCAL_ADC_REG.h"

/***************_AVR_INCLUDES_*****************************/
#include <avr/interrupt.h>

/***************_Macros_Configuration_*********************/
#define VOLT_AVCC_PIN				1
#define VOLT_AREF_PIN				2
#define VOLT_2_56_INTERNAL			3
	
#define RIGHT_RESULT_ADJUST			1
#define LEFT_RESULT_ADJUST			2	//(default) 
#define LEFT_ADJUST_SHIFT			6

#define	ISR_ADC_vect			_VECTOR(16)
#define ADC_INTERRUPT_ENABLE		1
#define ADC_INTERRUPT_DISABLE		2

#define CONVERSION_UPDATE			1

					/*////////_ADC operates within a frequency range of 50kHz to 200kHz*/
#define PRESCALER_DIV_FACTOR_2_		1		// for 16 MHz/2	  = 8   MHz
#define PRESCALER_DIV_FACTOR_4_		2		// for 16 MHz/4	  = 4	MHz
#define PRESCALER_DIV_FACTOR_8_		3		// for 16 MHz/8	  = 2	MHz
#define PRESCALER_DIV_FACTOR_16_	4		// for 16 MHz/16  = 1	MHz
#define PRESCALER_DIV_FACTOR_32_	5		// for 16 MHz/32  = 500 KHz
#define PRESCALER_DIV_FACTOR_64_	6		// for 16 MHz/64  = 250 KHz
#define PRESCALER_DIV_FACTOR_128_	7		// for 16 MHz/128 = 125 KHz

#define ADC_CHANNEL_0		(U8)0	//(default)
#define ADC_CHANNEL_1		(U8)1
#define ADC_CHANNEL_2		(U8)2
#define ADC_CHANNEL_3		(U8)3
#define ADC_CHANNEL_4		(U8)4
#define ADC_CHANNEL_5		(U8)5
#define ADC_CHANNEL_6		(U8)6
#define ADC_CHANNEL_7		(U8)7

#define  TRIGGERING_DISABLE_MODE								0
#define  TRIGGERING_SOURCE_FREE_RUNNING_MODE					1
#define  TRIGGERING_SOURCE_ANALOG_COMPARATOR					2
#define  TRIGGERING_SOURCE_EXT_INTERRUPT_0_REQUEST				3
#define  TRIGGERING_SOURCE_TIMER_0_COMPARE_MATCH				4
#define  TRIGGERING_SOURCE_TIMER_0_OVERFLOW						5
#define  TRIGGERING_SOURCE_TIMER_1_COMPARE_MATCH_B				6
#define  TRIGGERING_SOURCE_TIMER_1_OVERFLOW						7
#define  TRIGGERING_SOURCE_TIMER_1_CAPTURE_EVENT				8

/***************_MCAL_ADC.c_FUNCTION_PROTOTYPE_************/
void MCAL_ADC_INITIATE(U8 Volt_Referencex);
void MCAL_ADC_Disable(void);
void MCAL_ADC_Channel_Select(U8 ADC_Channel_Name);
void MCAL_ADC_Auto_Trigering_Mode(U8 Auto_Trigering_Conig);
U16 MCAL_ADC_Read(void);
F32 MCAL_ADC_MAPPED_READ(U8 loc_U8_Sensor_Resolution);
void MCAL_ADC_Interrupt_Mode(U8 Interrupt_Config);
void MCAL_ADC_SETCALLBACK_EXC(void(*loc_PTR_toFUNCTION)(void));
//ISR (ISR_ADC_VECTOR);

#endif /* MCAL_ADC_H_ */