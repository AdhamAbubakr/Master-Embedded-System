/*
 * main.c
 *
 *  Created on: Mar 10, 2023
 *      Author: Adham Abu bakr
 */
#include<stdio.h>

int main()
{		
	printf("please enter character  : ");
	char c ;
	scanf("%c" ,&c);
	
	if ((c>='a'&& c<='z') || (c>='A'&& c<='Z'))
	{
		printf("%c is the alphapet ",c);
	}else 
	{
		printf("%c is not alphapet ",c);
	}
	
      return 0;
}