/*
 * main.c
 *
 *  Created on: Mar 10, 2023
 *      Author: Adham Abu bakr
 */
#include<stdio.h>

int main()
{		

	int c,v ;
	char x;
		printf("please enter operator + - * / : \n");
		scanf("%c",&x);
		printf("please enter Two number :  ");
		scanf("%d %d",&c,&v);
	switch (x)
	{
		case'+':
			{
			
				int sum =c+v ;
				printf("the sum is =%d",sum);
				break;		
			}
			
		
		case'-':
		{
			int sub =c-v ;
			printf("the sub is : %d",sub);
			break;
			}	
			
		
		case'*':
		{
			int mul=c*v;
			printf("the mul is :%d",mul);
			break;
		}
			
		
		case'/':
			{
			int div =c/v;
			printf("the div is :%d",div);
			break;
			}	
	}
	
      return 0;
}

