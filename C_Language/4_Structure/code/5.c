/******************************************
 *	name : Adham Abo Bakr                 *
 *	Project : student information         *
 *	date : 14/8/2023                      *
*******************************************/
	                                  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// global Variable 

float radius ,area ;
#define PI 3.145 

int main ()
{
	printf("Enter The Radius : ");
	scanf("%f" ,&radius);
	area=PI*(radius *radius);
	printf("\n The Area is : %f",area);

	return 0 ;
}
