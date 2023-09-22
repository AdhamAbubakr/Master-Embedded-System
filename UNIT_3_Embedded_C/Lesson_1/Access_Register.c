
// how can i declare the pointer on register 
//solution 1 
	//declare the pointer 
	/* volatile int *p ;
	//assign the address if the i/o memory location to the pointer  
	p=(volatile int*)0x30610000 ;
	
	//output a 32-bit value 
	*p=0xffffffff ; 
	*/ 
	
//solution 2 

// *((volatile unsigned long*)(0x306100))=0xffffffff ;
//or 
//#define MYREGISTER *((volatile unsigned long *)(0x306100))


//Solution 3 
/* 	
	//YOu will create union on all ports
	typedef union {
		vuint32_t ALLPORTS ;
		//Create the Ports register 
		
		struct {
			vuint32 PORTA:8 ;
			vuint32 PORTB:8 ;
			vuint32 PORTC:8 ;
			vuint32 PORTD:8 ;
			
		}SIU_fields ;
		
	}SIU_R ;
	
	//Now WE assign the address on All PORTS  
	volatile SIU_R *PORTS=(volatile SIU_R*)0x306100 ;
	
	//access all bits  
	PORTS->ALLPORTS=0xffffffff ;
	
	//access specific bit  
	PORTS->SIU_fields.PORTA=0xff ;
	
	*/
	
	
	/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include<stdio.h>
#include<stdlib.h>

#include"Platform_Type.h"

#define RCC_BASEE   0x40021000
#define PORTA_BASE 0x40010800

#define RCC_APB2NER  *(volatile		uint32_t *)(RCC_BASEE  + 0x18)
#define GPIOA_CRH    *(volatile     uint32_t *)(PORTA_BASE + 0x04)
#define GPIOA_ODR    *(volatile     uint32_t *)(PORTA_BASE + 0x0C)


int main()
{

				RCC_APB2NER |=1<<2 ;

				GPIOA_CRH  &=0xff0fffff;

				GPIOA_CRH  |=0x00200000;

				while (1)
				{
					GPIOA_ODR |=(1<<13);
					for(int i=0 ; i<5000 ;i++);

					GPIOA_ODR &=~(1<<13);
					for(int i=0 ; i<5000 ;i++);
				}

	return 0 ;
}
int main ()
{
	
	return 0 ;
}