/*
 * MCAL_GPIO_REG.h
 *
 * Created: 2022-05-06 04:01:46 PM
 *  Author: Eng- Mohamed Mokhtar
 */ 

#ifndef MCAL_GPIO_REG_H_
#define MCAL_GPIO_REG_H_
												//Physical Address	Offset Address//
/***************************DIO_REGISTERS******************************************/
/*******_Hardware_PORT_A_******/
#define REG_PORTA     (*((volatile U8*)0x3B))	//		(0x3B)			0x1B
#define REG_DDRA      (*((volatile U8*)0x3A))   //		(0x3A)			0x1A
#define REG_PINA      (*((volatile U8*)0x39))   //		(0x39)			0x19
/*******_Hardware_PORT_B_******/			   
#define REG_PORTB     (*((volatile U8*)0x38))   //		(0x38)			0x18
#define REG_DDRB      (*((volatile U8*)0x37))	//		(0x37)			0x17
#define REG_PINB      (*((volatile U8*)0x36))	//		(0x36)			0x16
/*******_Hardware_PORT_C_******/			   
#define REG_PORTC     (*((volatile U8*)0x35))	//		(0x35)			0x15
#define REG_DDRC      (*((volatile U8*)0x34))	//		(0x34)			0x14
#define REG_PINC      (*((volatile U8*)0x33))	//		(0x33)			0x13
/*******_Hardware_PORT_D_******/			   
#define REG_PORTD     (*((volatile U8*)0x32))	//		(0x32)			0x12
#define REG_DDRD      (*((volatile U8*)0x31))	//		(0x31)			0x11
#define REG_PIND      (*((volatile U8*)0x30))	//		(0x30)			0x10

#endif /* MCAL_GPIO_REG_H_ */