/*
 * MCAL_GPIO.c
 *
 * Created: 2022-05-06 04:00:46 PM
 *  Author: Eng- Mohamed Mokhtar
 */ 
#include "MCAL_GPIO.h"

/* =============================================================================================
 * @Fn						-MCAL_GPIO_Init_Pin_Mode.
 * @brief	    -initialize the GPIOx PIN according to the instance Pin_Config_IO.
 * @param [in] 	-GPIOx: can be (GPIOA, GPIOB, GPIOC, GPIOD) to select the GPIO peripheral port.
 * @param [in] 	-GPIO_PIN_x: can be (GPIO_PIN_0, ..., GPIO_PIN_7) to select the GPIO peripheral.
 * @param [in] 	-Pin_Config_IO: configuration that controls the Input/Output state.
 * @retval 					-none
 * Note						-none
 */
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

/* =============================================================================================
 * @Fn			-MCAL_GPIO_Deinit_Port.
 * @brief	    -Reset the GPIOx registers.
 * @param [in] 	-GPIOx: x can be (A...D) to select the GPIO peripheral.
 * @retval 		-none
 * Note			-none
 */
void MCAL_GPIO_Deinit_Port(U8 GPIOx)
{
	switch (GPIOx)
	{
		case GPIOA:
			CLR_REG(REG_DDRA);
			CLR_REG(REG_PORTA);
		break;
		case GPIOB:
			CLR_REG(REG_DDRB);
			CLR_REG(REG_PORTB);
		break;
		case GPIOC:
			CLR_REG(REG_DDRC);
			CLR_REG(REG_PORTB);
		break;
		case GPIOD:
			CLR_REG(REG_DDRD);
			CLR_REG(REG_PORTB);
		break;
		default:
		break;
	}
}

/* =============================================================================================
 * @Fn						-MCAL_GPIO_Write_Pin.
 * @brief	    -initialize the GPIOx PIN according to the instance Pin_Config_IO.
 * @param [in] 	-GPIOx: can be (GPIOA, GPIOB, GPIOC, GPIOD) to select the GPIO peripheral port.
 * @param [in] 	-GPIO_PIN_x: can be (GPIO_PIN_0, ..., GPIO_PIN_7) to select the GPIO peripheral.
 * @param [in] 	-Pin_OP_State_HiLw: configuration that controls the High/Low output state.
 * @retval 					-none
 * Note						-none
 */
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

/* =============================================================================================
 * @Fn						-MCAL_GPIO_Read_Pin.
 * @brief	    -initialize the GPIOx PIN according to the instance Pin_Config_IO.
 * @param [in] 	-GPIOx: can be (GPIOA, GPIOB, GPIOC, GPIOD) to select the GPIO peripheral port.
 * @param [in] 	-GPIO_PIN_x: can be (GPIO_PIN_0, ..., GPIO_PIN_7) to select the GPIO peripheral.
 * @retval 					-either one of two states (High, Low)
 * Note						-none 
 */
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

/* =============================================================================================
 * @Fn						-MCAL_GPIO_Read_Port.
 * @brief	    -initialize the GPIOx PIN according to the instance Pin_Config_IO.
 * @param [in] 	-GPIOx: can be (GPIOA, GPIOB, GPIOC, GPIOD) to select the GPIO peripheral port.
 * @param [in] 	-GPIO_PIN_x: can be (GPIO_PIN_0, ..., GPIO_PIN_7) to select the GPIO peripheral.
 * @retval 					-input value on GPIOx
 * Note						-none 
 */
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

/* =============================================================================================
 * @Fn						-MCAL_GPIO_Toggle_Pin.
 * @brief	    -initialize the GPIOx PIN according to the instance Pin_Config_IO.
 * @param [in] 	-GPIOx: can be (GPIOA, GPIOB, GPIOC, GPIOD) to select the GPIO peripheral port.
 * @param [in] 	-GPIO_PIN_x: can be (GPIO_PIN_0, ..., GPIO_PIN_7) to select the GPIO peripheral.
 * @retval 					-none
 * Note						-Toggles the state of an selected pin 
 */
void MCAL_GPIO_Toggle_Pin(U8 GPIOx, U8 GPIO_PIN_x)
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

/* =============================================================================================
 * @Fn						-MCAL_GPIO_Input_Pin_Config.
 * @brief	    -initialize the GPIOx PIN according to the instance Pin_Config_IO.
 * @param [in] 	-GPIOx: can be (GPIOA, GPIOB, GPIOC, GPIOD) to select the GPIO peripheral port.
 * @param [in] 	-GPIO_PIN_x: can be (GPIO_PIN_0, ..., GPIO_PIN_7) to select the GPIO peripheral.
 * @param [in] 	-Pin_Config: configuration that controls the activity of the internal pull-up Resistor. 
 * @retval 					-none
 * Note						-none 
 */
void MCAL_GPIO_Input_Pin_Config(U8 GPIOx, U8 GPIO_PIN_x, U8 Pin_PullUp_Config)
{
	switch (GPIOx)
	{
		case GPIOA:
			switch(Pin_PullUp_Config)
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
			switch(Pin_PullUp_Config)
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
			switch(Pin_PullUp_Config)
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
			switch(Pin_PullUp_Config)
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