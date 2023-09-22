/******************************************
 *	name : Adham Abo Bakr                 *
 *	Project : student information         *
 *	date : 14/8/2023                      *
*******************************************/
	                                  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// global Variable 

struct student {
	char name[20];
	int roll ;
	float marks ;
	
};
int main ()
{
	struct student x[10];
	int i ;
	
	printf("Please Enter The information of Students :");
	
	for ( i=0 ; i<10 ; i++)
	{
		printf("\n Enter Your Name %d :",i);
		scanf("%s",&x[i].name);
	
		printf("\n Enter Your Roll Number %d :",i);
		scanf("%d",&x[i].roll);	
	
		printf("\n Enter Your marks %d :",i);
		scanf("%f",&x[i].marks);
	};
	
	printf("\n The information of Students is : ");
	
	for (i=0 ;i<10 ;i++)
	{
			printf("\n Enter Your Name : %s",x[i].name);
			
			printf("\n Enter Your Roll Number : %d",x[i].roll);
			
			printf("\n Enter Your marks :%f ",x[i].marks);
	};
	
	return 0;
}