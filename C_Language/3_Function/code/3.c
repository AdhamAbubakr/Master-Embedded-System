/*
 * main.c
 *
 *  Created on: Apr 5, 2023
 *      Author: Adham Abu bakr
 */
#include<stdio.h>
#include<stdlib.h>

void reverse ();

int main ()
{
	printf("Enter a Sentence :");
	reverse();	
	return 0 ;
}

void reverse()
{
	char c;
	scanf("%c ",&c);
	if (c!='\n')
	{
		reverse();
		printf("%c",c);
	}