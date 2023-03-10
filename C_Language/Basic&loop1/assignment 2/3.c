/*
 * main.c
 *
 *  Created on: Mar 10, 2023
 *      Author: Adham Abu bakr
 */
#include<stdio.h>

int main()
{		
	printf("please enter three num : ");
	
	float x,y,z ;
	scanf("%f%f%f",&x,&y,&z);
	
	if (x>=y && x>=z)
	{
		printf("%f is the biggest ",x);
	}else if (y>=x && y>=z)
	{
		printf("%f is the biggest ",y);
	}else if (z>=x && z>=y )
	{
		printf("%f is the biggest ",z);
		
	}
	
      return 0;
}

