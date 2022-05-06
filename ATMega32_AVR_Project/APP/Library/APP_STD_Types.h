/*
 * APP_STD_Types.h
 *
 * Created: 2022-04-08 05:20:16 PM
 *  Author: Eng- Mohamed Mokhtar
 */ 

#ifndef APP_STD_TYPES_H_
#define APP_STD_TYPES_H_

/* Pointer Typedef ************************/
#define NULL	(void *)0
/* Signed Number Typedef ******************/
typedef signed char         	S8;
typedef signed short int    	S16;
typedef signed long int     	S32;
typedef signed long long		S64;
/* Unsigned Number Typedef ****************/
typedef unsigned char			U8;
typedef unsigned short int  	U16;
typedef unsigned long int   	U32;
typedef unsigned long long  	U64;
/* Floating-Point Number Typedef *******************************************************/
typedef float               	F32;		// 4_Byte	6  decimal places floating point
typedef double              	F64;		// 8_Byte	14 decimal places floating point
typedef long double         	F96;		// 12_Byte	19 decimal places floating point

#endif /* APP_STD_TYPES_H_ */