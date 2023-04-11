/* Adham abu bakr
	example about break ;
	             */

#include<stdio.h>
#include<stdlib.h>

int main ()
{
	float num , average ,sum ;
	
	int i,n ;
	
	printf("maximum no.of input \n ");
	
	scanf("%f",&n);
	
	for(i=1;i<=n ;++i)
	{
		printf("Enter n%d : ",i);
		scanf("%f",&num);
		
		if (num<0.0)
			break ;
			
			sum=sum+sum;
			
	}
	average=sum/(i-1);
	
	printf("Average =%.2f",average);
	
	
	return 0 ;
}