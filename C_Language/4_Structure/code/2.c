#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct distance {
	
	int feet ;
	float inch ;
	
};

int main  ()
{
	struct distance d1 ,d2 ,sum ;
	printf("please Enter The data of distance 1 : ");
	scanf("%d %f",&d1.feet ,&d1.inch);
	
	printf("Please Enter The data of distance 2 : ");
	scanf("%d %f ",&d2.feet ,&d2.inch);
	
	 sum.feet= d1.feet +  d2.feet ;
	 sum.inch= d1.inch +  d2.inch ; 
	
	
	printf("the sum of feet is : %d \n the sum of inch :%f ", sum.feet,sum.inch);
	
	
	return 0 ;
}