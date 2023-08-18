/**************************************
*	@file:main.c                      *
*	@creator :Adham Abo Bakr          *
*	@Description : Sum all Digits     *
*									          * 
*			****************	          *
*			*learn in depth*   		    *
*			**************** 		       *
*									          * 
***************************************/

//Linking Section 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Definition Section
int sum_of_digit(int s);

//Global Declaration Section

  int a, s,summation = 0, remain;
	 
//main Progres Section 
int main()
{
	printf("input:");
	
	scanf("%d",&a);
	
	sum_of_digit(a);
	

   return 0;
}
// Define Function Section 

int sum_of_digit(int s)
{
   while (s != 0)
   {
      remain    = s % 10;
      summation += remain;
      s         = s / 10;
   }
	printf("\n output %d = %d",a,summation);
}










