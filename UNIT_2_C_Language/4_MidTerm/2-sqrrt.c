/**************************************
 *	@file:main.c                      *
 *	@creator :Adham Abo Bakr          *
 *	@Description : square Root        *
 *									  *
 *			****************	      *
 *			*learn in depth*   	      *
 *			**************** 		  *
 *							          *
 ***************************************/

// Linking Section

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Definition Section

// Global Declaration Section
int sqrtt(int n);
float num, i;

// main Progres Section
int main()
{
    printf("pleasea Enter number to get square root : ");
    
    scanf("%f", &num);

    sqrtt(num);

    return 0;
}
// Define Function Section

 int sqrtt(int n)
{
    for(i = 0.01; i * i <n; i += 0.01);
    
        printf("\n %.2f", i);
}
