/* Adham abu bakr
	
	             */

#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int a[10][10] ,trans[10][10] ,r,c,i,j ;
	printf("Enter rows and coloumn of matrix ");
	
	scanf("%d %d ",&r ,&c);
	
	printf("Enter elements of matrix : ");
	for(i=0 ;i<r;i++)
	for (j=0 ;j<c ;j++)
	{
		printf(" Enter elements a%d%d: ",i+1 ,j+1 );
		scanf("%d",&a[i][j]);
		
	}
	
	printf("Entered Matrix \n");
	for (int  i=0 ;i<r ;i++)
	for(int j=0 ;j<c ;j++)
	{
		printf("%d" ,a[i][j]);
		if(j==c-1)
		{
			printf("\n\n");
			
		}
	}
	
	for(i=0 ;i<r ;++i)
	for (j=0 ;j<c ;++j)
	{
		trans[j][i]=a[i][j];
		
	}
	
	printf("\n transpose of matrix : \n");
	for(i=0 ;i<r;i++)
	for(j=0 ;j<c ;j++)
	{
		printf("%d",trans [i][j]);
		if (j==r-1)
		printf("\n\n");
		
	}
				return 0 ;
}
