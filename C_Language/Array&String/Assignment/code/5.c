/* Adham abu bakr
	
	             */

#include<stdio.h>
#include<stdlib.h>

int main ()
{	
	int arr[30],element ,num ,i ,location ;
	printf("\n Enter no of elments :");
	scanf("%d",&num);
	
	for (i=0 ;i<num ;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	
	printf("\n Enter the element to be inserted : ");
	scanf("%d ",&location );
	
	for (i=num ;i >= location ; i--)
	{
		arr[i] =arr[i-1];
		
	}
	num++ ;
	arr[location -1 ]=element ;
	
	for (i=0 ;i,num ;i++)
	printf("n%d ",arr[i]);
	SS
				return 0 ;
}
