/**************************************
*	@file:main.c                      *
*	@creator :Adham Abo Bakr          *
*	@Description : 				      *
*									  * 
*			****************	      *
*			*learn in depth*   		  *
*			**************** 		  *
*									  * 
***************************************/

//Linking Section 

#include<stdio.h>
#include<stdlib.h>

//Definition Section


//Global Declaration Section

char a[5]={1,2,3,4,5};

//main Progres Section 

int main()
{
	reverse(a);

 return 0;
}
int reverse(int n[])
{
	for(int i=4 ;i>=0 ;i--)
	{
		printf("%d",n[i]);
	}
}
// Define Function Section 
