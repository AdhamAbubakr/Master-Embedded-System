#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n1 ,n2 ;

int prime_number(int n3,int n4);

int main ()
{
	printf("Please Enter 2 number : ");
	scanf("%d %d",&n1,&n2);
	
	prime_number(n1,n2);

	return 0; 
	 }
	 
	 
	 int prime_number(int n3,int n4)
	 {
	 	for(int i=n1 ;i<n2;i++)
	 	{
	 		if(i%2==0)
	 		{
	 			continue ;
			 }
			 printf("\n Prime numbers between %d and %d are :%d \n ",n1,n2 ,i );
			 
		 }
	 }