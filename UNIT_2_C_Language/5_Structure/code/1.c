#include<stdio.h>
#include<stdlib.h>

struct student 
{
	char name[20];
	int roll ;
	float marks ;
	
};

int main () 
{
	struct student x ;
	
	printf("please enter your information here : ");
	printf("\n  Enter Here Your name : ");
	scanf("%s",&x.name);
	printf("\n Enter Your Roll : ");
	scanf("%d" ,&x.roll );
	printf("\n Enter Your Marks : ");
	scanf("%f",&x.marks);
	
	printf("\n Displaying infromation is : ");
	printf("\n name :%s \n Roll : %d \n Marks: %f \n  ",x.name ,x.roll ,x.marks);
	
	
	
	return 0 ;
}