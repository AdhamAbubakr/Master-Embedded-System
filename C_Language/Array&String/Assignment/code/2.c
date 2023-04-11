/* Adham abu bakr
	
	             */

#include<stdio.h>
#include<stdlib.h>

int main ()
{
	float a[2][2] ,b[2][2],sum[2][2];
	int i,j;
	printf("enter the elements of 1st matrix \n ");
	
	for(int i=0 ;i<2;i++)
	{
		for(int j=0 ;j<2;j++)
		{
			printf("enter a %d%d :\n",i+1,j+1);
			scanf("%f",&a[i ][j]);
		}
		
	} 
	
	for(int i=0 ;i<2;i++)
	{
		for(int j=0 ;j<2;j++)
		{
			printf("enter a%d%d: \n",i+1,j+1);
			
			scanf("%f",&a[i][j]);
		}
		
	}
	
	printf("enter number of two matrix 2*2: ");
	for (int i=0 ;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("enter b %d%d : \n",i+1,j+1);
			scanf("%f",b[i][j]);
			
		}
	}
	
	for(i=0 ; i<2 ;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("sum of matrix : \n");
		for (i=0 ;i<2;i++)
			for(j=0 ;j<2;j++)
			{
				printf("%.1f\t",sum[i][j]);
				if (j==1 )
				printf("\n");
			}
	
	return 0 ;
}
