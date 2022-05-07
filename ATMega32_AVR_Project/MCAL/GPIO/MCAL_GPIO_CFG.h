/*
 * MCAL_GPIO_CFG.h
 *
 * Created: 2022-05-06 04:01:38 PM
 *  Author: Eng- Mohamed Mokhtar
 */ 

#ifndef MCAL_GPIO_CFG_H_
#define MCAL_GPIO_CFG_H_

#define	GPIOA		(U8)1
#define	GPIOB		(U8)2
#define	GPIOC		(U8)3
#define	GPIOD		(U8)4

#define	GPIO_PIN_0			(U8)0
#define	GPIO_PIN_1			(U8)1
#define	GPIO_PIN_2			(U8)2
#define	GPIO_PIN_3			(U8)3
#define	GPIO_PIN_4			(U8)4
#define	GPIO_PIN_5			(U8)5
#define	GPIO_PIN_6			(U8)6
#define	GPIO_PIN_7			(U8)7

#endif /* MCAL_GPIO_CFG_H_ */

/*******************************************************************
	PinX  Register has no usage if the direction is OutPut (O/P)
	PortX Register has no usage if the direction is InPut  (I/P) (except for enable internal pull-up res)
	----------------------------------------------------------------
	Each address has its own register in the memory
	Physical Address = Base Address + Offset Address
	
			 Offset Address    Physical Address			Base Address
	PORTA ->	0x1B		-		(0x3B)			=		0x20
	PORTB ->	0x18		-		(0x38)			=		0x20
	PORTC ->	0x15		-		(0x35)			=		0x20
	PORTD ->	0x12		-		(0x32)			=		0x20
	
	and in each time we're accessing the Physical Address.
	----------------------------------------------------------------
	PORTA     (*((volatile uint8*)0x3B))
	"volatile" is used for bypassing the optimization for the unused variables
	Noting that: we're using a type casting instead of using a true pointer for each case.
*/