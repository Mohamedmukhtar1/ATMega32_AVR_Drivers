/*
 * MCAL_GPIO.c
 *
 * Created: 2022-05-06 04:00:46 PM
 *  Author: Eng- Mohamed Mokhtar
 */ 
#include "MCAL_GPIO.h"

void MCAL_GPIO_Init_Pin_Mode(U8 GPIOx, U8 GPIO_PIN_x, U8 Pin_Config_IO)
{
	switch (GPIOx)
	{
		case GPIOA:
			switch(Pin_Config_IO)
			{
				case GPIO_OUTPUT:
				SET_BIT(REG_DDRA, GPIO_PIN_x);
				break;
				case GPIO_INPUT:
				CLR_BIT(REG_DDRA, GPIO_PIN_x);
				break;
				default:
				break;
			}
		break;
		case GPIOB:
			switch(Pin_Config_IO)
			{
				case GPIO_OUTPUT:
				SET_BIT(REG_DDRB, GPIO_PIN_x);
				break;
				case GPIO_INPUT:
				CLR_BIT(REG_DDRB, GPIO_PIN_x);
				break;
				default:
				break;
			}
		break;
		case GPIOC:
			switch(Pin_Config_IO)
			{
				case GPIO_OUTPUT:
				SET_BIT(REG_DDRC, GPIO_PIN_x);
				break;
				case GPIO_INPUT:
				CLR_BIT(REG_DDRC, GPIO_PIN_x);
				break;
				default:
				break;
			}
		break;
		case GPIOD:
			switch(Pin_Config_IO)
			{
				case GPIO_OUTPUT:
				SET_BIT(REG_DDRD, GPIO_PIN_x);
				break;
				case GPIO_INPUT:
				CLR_BIT(REG_DDRD, GPIO_PIN_x);
				break;
				default:
				break;
			}
		break;
		default:
		break;
	}
}

void MCAL_GPIO_Write_Pin(U8 GPIOx, U8 GPIO_PIN_x, U8 Pin_OP_State_HiLw)
{
	switch (GPIOx)
	{
		case GPIOA:
			switch(Pin_OP_State_HiLw)
			{
				case GPIO_HIGH:
				SET_BIT(REG_PORTA, GPIO_PIN_x);
				break;
				case GPIO_LOW:
				CLR_BIT(REG_PORTA, GPIO_PIN_x);
				break;
				default:
				break;
			}
		break;
		case GPIOB:
			switch(Pin_OP_State_HiLw)
			{
				case GPIO_HIGH:
				SET_BIT(REG_PORTB, GPIO_PIN_x);
				break;
				case GPIO_LOW:
				CLR_BIT(REG_PORTB, GPIO_PIN_x);
				break;
				default:
				break;
			}
		break;
		case GPIOC:
			switch(Pin_OP_State_HiLw)
			{
				case GPIO_HIGH:
				SET_BIT(REG_PORTC, GPIO_PIN_x);
				break;
				case GPIO_LOW:
				CLR_BIT(REG_PORTC, GPIO_PIN_x);
				break;
				default:
				break;
			}
		break;
		case GPIOD:
			switch(Pin_OP_State_HiLw)
			{
				case GPIO_HIGH:
				SET_BIT(REG_PORTD, GPIO_PIN_x);
				break;
				case GPIO_LOW:
				CLR_BIT(REG_PORTD, GPIO_PIN_x);
				break;
				default:
				break;
			}
		break;
		default:
		break;
	}
}

U8 MCAL_GPIO_Read_Pin(U8 GPIOx, U8 GPIO_PIN_x)
{
	U8 loc_U8_GPIO_Pin_Reading =0;
	switch (GPIOx)
	{
		case GPIOA:
		loc_U8_GPIO_Pin_Reading = GET_BIT(REG_PINA, GPIO_PIN_x);
		break;
		case GPIOB:
		loc_U8_GPIO_Pin_Reading = GET_BIT(REG_PINB, GPIO_PIN_x);
		break;
		case GPIOC:
		loc_U8_GPIO_Pin_Reading = GET_BIT(REG_PINC, GPIO_PIN_x);
		break;
		case GPIOD:
		loc_U8_GPIO_Pin_Reading = GET_BIT(REG_PIND, GPIO_PIN_x);
		break;
		default:
		break;
	}
	return loc_U8_GPIO_Pin_Reading;
}

U8 MCAL_GPIO_Read_Port(U8 GPIOx)
{
	U8 loc_U8_GPIO_PORT_Reading =0;
	switch (GPIOx)
	{
		case GPIOA:
		loc_U8_GPIO_PORT_Reading = GET_REG(REG_PINA);
		break;
		case GPIOB:
		loc_U8_GPIO_PORT_Reading = GET_REG(REG_PINB);
		break;
		case GPIOC:
		loc_U8_GPIO_PORT_Reading = GET_REG(REG_PINC);
		break;
		case GPIOD:
		loc_U8_GPIO_PORT_Reading = GET_REG(REG_PIND);
		break;
		default:
		break;
	}
	return loc_U8_GPIO_PORT_Reading;
}

void MCAL_GPIO_Toggel_Pin(U8 GPIOx, U8 GPIO_PIN_x)
{
	switch (GPIOx)
	{
		case GPIOA:
			TOG_BIT(REG_PORTA, GPIO_PIN_x);
		break;
		case GPIOB:
			TOG_BIT(REG_PORTB, GPIO_PIN_x);
		break;
		case GPIOC:
			TOG_BIT(REG_PORTC, GPIO_PIN_x);
		break;
		case GPIOD:
			TOG_BIT(REG_PORTD, GPIO_PIN_x);
		break;
		default:
		break;
	}
}

void MCAL_GPIO_Input_Pin_Config(U8 GPIOx, U8 GPIO_PIN_x, U8 Pin_Config)
{
	switch (GPIOx)
	{
		case GPIOA:
			switch(Pin_Config)
			{
				case INTERNAL_PULLUP_RESISTOR:
					CLR_BIT(REG_PORTA, GPIO_PIN_x);
				break;
				case EXTERNAL_PULLUP_RESISTOR:
					SET_BIT(REG_PORTA, GPIO_PIN_x);
				break;
				default:
				break;
			}
		break;
		case GPIOB:
			switch(Pin_Config)
			{
				case INTERNAL_PULLUP_RESISTOR:
					CLR_BIT(REG_PORTB, GPIO_PIN_x);
				break;
				case EXTERNAL_PULLUP_RESISTOR:
					SET_BIT(REG_PORTB, GPIO_PIN_x);
				break;
				default:
				break;
			}
		break;
		case GPIOC:
			switch(Pin_Config)
			{
				case INTERNAL_PULLUP_RESISTOR:
				CLR_BIT(REG_PORTC, GPIO_PIN_x);
				break;
				case EXTERNAL_PULLUP_RESISTOR:
				SET_BIT(REG_PORTC, GPIO_PIN_x);
				break;
				default:
				break;
			}
		break;
		case GPIOD:
			switch(Pin_Config)
			{
				case INTERNAL_PULLUP_RESISTOR:
				CLR_BIT(REG_PORTD, GPIO_PIN_x);
				break;
				case EXTERNAL_PULLUP_RESISTOR:
				SET_BIT(REG_PORTD, GPIO_PIN_x);
				break;
				default:
				break;
			}
		break;
		default:
		break;
	}
}


