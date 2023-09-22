/*
 * main.c
 *
 *  Created on: Apr 5, 2023
 *      Author: Adham Abu bakr
 */
#include<stdio.h>
#include<stdlib.h>

int power (int n1 , int n2 );
int main ()
{
	int base , exp ;
	
	printf("Enter base number : ");
	
	scanf("%d ",&base );
	printf("Enter power number (positive integar ):");
	
	scanf("%d",&exp);
	printf("%d^%d=%d",base, exp ,power(base,exp));
	

	return 0 ;
}

int power (int base , int exp )
{
	
	if (exp!=0 )
	{
		return (base *power(base,exp-1));
		
	}
	else 
	return 1;
}