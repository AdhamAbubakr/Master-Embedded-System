#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main ()
{
	//define the variables 
	int a ,i ,arr[10];
	//Define the Pointers 
	int *pointer ;

	printf("\n\n please enter the number of array");
	scanf("%d",&a);
	pointer=&arr[0];
	
	printf("Input %d number of elements in the array :\n",a);;
	
	for(i=0 ;i<a ;i++)
	{
		printf("element -%d ",i+1);
		scanf("%d ",pointer);
		pointer++;
	}
	
	pointer=&arr[a-1];
	
	printf("\n The elements of array in reverse order are : ");
	
	for(i=a ;i>0 ;i--)
	{
		printf("\n element -%d:%d ",i ,*pointer);
		pointer--;
		
		
	}
	printf("\n\n");
	return 0;
}