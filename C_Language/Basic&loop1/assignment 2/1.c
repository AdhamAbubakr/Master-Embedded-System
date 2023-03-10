/*
 * main.c
 *
 *  Created on: Mar 10, 2023
 *      Author: Adham Abu bakr
 */
#include<stdio.h>

int main()
{	
 		printf ("enter number to check odd or even :  ");
 		int x ;
 		scanf("%d",&x);
 		if((x%2)==0)
 		{
 			printf ("%d is even ",x);
		 }else {
		 	printf("%d is odd ",x);
		 	
		 }
      return 0;
}