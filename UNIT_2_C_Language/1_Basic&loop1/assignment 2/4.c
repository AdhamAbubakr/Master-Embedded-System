/*
 * main.c
 *
 *  Created on: Mar 10, 2023
 *      Author: Adham Abu bakr
 */
#include<stdio.h>

int main()
{		
	printf("please enter number : ");
	
		float  x ;
	scanf("%f",&x);
	if (x<0)
	{
		printf("%f is negative ",x);
	}else if (x==0 )
	{
		printf("%f is equal zero ",x);
	}else 
	{
		printf(" %f is positive ",x);
	}
      return 0;
}
