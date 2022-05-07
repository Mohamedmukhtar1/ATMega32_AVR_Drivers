/*
 * MCAL_ADC_REG.h
 *
 * Created: 2022-05-06 08:54:39 PM
 *  Author: Eng- Mohamed Mokhtar
 */ 

#ifndef MCAL_ADC_REG_H_
#define MCAL_ADC_REG_H_
												//Physical Address	Offset Address//
/***************************GPIO_REGISTERS*****************************************/
#define REG_SFIOR     (*((volatile U8*)0x50))	//  (0x50)			0x30
#define REG_ADMUX     (*((volatile U8*)0x27))	//	(0x55)			0x35
#define REG_ADCSRA    (*((volatile U8*)0x26))	//	(0x5F)			0x3F
#define REG_ADCH      (*((volatile U8*)0x25))	//	(0x5B)			0x3B
#define REG_ADCL      (*((volatile U8*)0x24))	//	(0x5B)			0x3B
#define REG_ADC_VALUE (*((volatile U16*)0x24))	//	(0x5B)			0x3B	//ADCL_10-Bits_Data

#endif /* MCAL_ADC_REG_H_ */