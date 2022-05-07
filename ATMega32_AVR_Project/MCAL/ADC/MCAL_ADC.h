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

/***************_Macros_Configuration_*********************/
#define VOLT_AVCC_PIN				1
#define VOLT_AREF_PIN				2
#define VOLT_2_56_INTERNAL			3
	
#define RIGHT_RESULT_ADJUST			1
#define LEFT_RESULT_ADJUST			2

/*////////_ADC operates within a frequency range of 50kHz to 200kHz*/
#define PRESCALER_DIV_FACTOR_2_		1		// for 16 MHz/2	  = 8   MHz
#define PRESCALER_DIV_FACTOR_4_		2		// for 16 MHz/4	  = 4	MHz
#define PRESCALER_DIV_FACTOR_8_		3		// for 16 MHz/8	  = 2	MHz
#define PRESCALER_DIV_FACTOR_16_	4		// for 16 MHz/16  = 1	MHz
#define PRESCALER_DIV_FACTOR_32_	5		// for 16 MHz/32  = 500 KHz
#define PRESCALER_DIV_FACTOR_64_	6		// for 16 MHz/64  = 250 KHz
#define PRESCALER_DIV_FACTOR_128_	7		// for 16 MHz/128 = 125 KHz

#define ADC_CHANNEL_0_		(U8)0	//(default)
#define ADC_CHANNEL_1_		(U8)1
#define ADC_CHANNEL_2_		(U8)2
#define ADC_CHANNEL_3_		(U8)3
#define ADC_CHANNEL_4_		(U8)4
#define ADC_CHANNEL_5_		(U8)5
#define ADC_CHANNEL_6_		(U8)6
#define ADC_CHANNEL_7_		(U8)7
							//76543210		REFS1 REFS0 ADLAR  MUX4  MUX3  MUX2  MUX1  MUX0
#define ADMUX_SAFE_RANGE	0b11100000	 //	  1	    1	  1		0	  0		0	  0		0
#define ADMUX_WRITE_RANGE	0b00011111   //   0	    0	  0		1	  1		1     1		1
/***************_MCAL_ADC.c_FUNCTION_PROTOTYPE_************/
void MCAL_ADC_INITIATE(U8 Volt_Referencex);
void MCAL_ADC_Disable(void);
void MCAL_ADC_Channel_Select(U8 ADC_Channel_Name);

#endif /* MCAL_ADC_H_ */