/*
 * main.c
 *
 *  Created on: Mar 10, 2023
 *      Author: Adham Abu bakr
 */
#include<stdio.h>

int main()
{	
 		char c ;
 		printf("Enter an alphapet:");
 		scanf("%c",&c);
 		if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='o'||c=='O'||c=='u'||c=='U')
 		{
 			printf("%c is a vowel ",c);
 			
		 }else 
		 printf("%c is a consonant ",c);
		 
      return 0;
}

