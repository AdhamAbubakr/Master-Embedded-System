/*
 * main.c
 *
 *  Created on: Mar 10, 2023
 *      Author: Adham Abu bakr
 */
#include<stdio.h>

int main()
{		
		printf("please enter num :");
		int n ,count ,sum=0  ;
		scanf("%d",&n);
		count=1 ;
		while (count<=n)
		{
			sum+=count ;
			++count;
			
			
		}
		printf("Sum =%d ",sum);
	
      return 0;
}
