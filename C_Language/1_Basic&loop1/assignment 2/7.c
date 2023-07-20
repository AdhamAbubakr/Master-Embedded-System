/*
 * main.c
 *
 *  Created on: Mar 10, 2023
 *      Author: Adham Abu bakr
 */
#include<stdio.h>

int main()
{		
	int n , count ;
	unsigned long long int factorial=1 ;
	
	printf("Enter an integar ");
	scanf("%d",&n);
	if (n<0 )
	{
		printf("Error !!! Factorial of negative number doesn't Exist ");
		}else 
		{
			for (count =1 ; count<-n ;count ++ )
			{
				factorial*=count ;
			}
			printf("Factoril=%lu",factorial );
			
		}
	
      return 0;
}