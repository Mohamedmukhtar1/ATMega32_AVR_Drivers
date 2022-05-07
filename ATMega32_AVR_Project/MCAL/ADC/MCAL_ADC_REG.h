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


/*               _____  __  __ _    ___   __	 _____  ______ _____ 
 *         /\   |  __ \|  \/  | |  | \ \ / /	|  __ \|  ____/ ____|
 *        /  \  | |  | | \  / | |  | |\ V /		| |__) | |__ | |  __ 
 *       / /\ \ | |  | | |\/| | |  | | > <		|  _  /|  __|| | |_ |
 *      / ____ \| |__| | |  | | |__| |/ . \		| | \ \| |___| |__| |
 *     /_/    \_\_____/|_|  |_|\____//_/ \_\    |_|  \_\______\_____|
 *     ADMUX REGISTER DEFINITION - [ADC Multiplexer Selection Register]
 *     REGISTER MISSION:	[1] Voltage Reference Selection
 *							[2] ADC Result Adjustment
 *							[3] Analog Channel Selection				
-----------------------------------------------------------------------------
||_7_||  ||_6_||  ||_5_||  ||_4_||  ||_3_||  ||_2_||  ||_1_||  ||_0_||
  REFS1	   REFS0	ADLAR	 MUX4	  MUX3	   MUX2	    MUX1	 MUX0
-----------------------------------------------------------------------------*/
#define ADMUX_REFS1		7			// Voltage Reference Selection1
#define ADMUX_REFS0		6			// Voltage Reference Selection0
#define ADMUX_ADLAR		5			// ADC Left Adjust Result
#define ADMUX_MUX_4		4			// Analog Channel and Gain Selection 4
#define ADMUX_MUX_3		3			// Analog Channel and Gain Selection 3
#define ADMUX_MUX_2		2			// Analog Channel and Gain Selection 2
#define ADMUX_MUX_1		1			// Analog Channel and Gain Selection 1
#define ADMUX_MUX_0		0			// Analog Channel and Gain Selection 0

/*               _____   _____  _____ _____					 _____  ______ _____
 *         /\   |  __ \ / ____|/ ____|  __ \     /\			|  __ \|  ____/ ____|
 *        /  \  | |  | | |    | (___ | |__) |   /  \		| |__) | |__ | |  __
 *       / /\ \ | |  | | |     \___ \|  _  /   / /\ \		|  _  /|  __|| | |_ |
 *      / ____ \| |__| | |____ ____) | | \ \  / ____ \		| | \ \| |___| |__| |
 *     /_/    \_\_____/ \_____|_____/|_|  \_\/_/    \_\     |_|  \_\______\_____|
 *     ADSCRA REGISTER DEFINITION - [ADC Multiplexer Selection Register]
 *     REGISTER MISSION: [1] ADC Enable/Disable
 *						 [2] ADC Conversion Start
 *						 [3] Analog Channel Selection
 *						 [4] ADC Auto Trigger Enable
 *						 [5] ADC Interrupt Enable
 *						 [6] ADC Prescaler Select				
-----------------------------------------------------------------------------
||_7_||  ||_6_||  ||_5_||  ||_4_||  ||_3_||  ||_2_||  ||_1_||  ||_0_||
  ADEN	   ADSC	    ADATE	 ADIF	  ADIE	   ADPS2    ADPS1	 ADPS0
-----------------------------------------------------------------------------*/
#define ADCSRA_ADEN		7		// ADC Enable/Disable
#define ADCSRA_ADSC		6		// ADC Start Conversion			#complete, returns_to_zero
#define ADCSRA_ADATE	5		// ADC Auto Trigger Enable/Disable
#define ADCSRA_ADIF		4		// ADC Interrupt Flag			#complete, returns_to_zero
#define ADCSRA_ADIE		3		// ADC Interrupt Enable/Disable
#define ADCSRA_ADPS2	2		// -> ADC Prescaler Select2
#define ADCSRA_ADPS1	1		// -> ADC Prescaler Select1
#define ADCSRA_ADPS0	0		// -> ADC Prescaler Select0


#endif /* MCAL_ADC_REG_H_ */