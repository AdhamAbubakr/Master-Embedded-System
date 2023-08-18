/**************************************
 *	@file:main.c                      *
 *	@creator :Adham Abo Bakr          *
 *	@Description : 				      *
 *									  *
 *			****************	      *
 *			*learn in depth*   		  *
 *			**************** 		  *
 *									  *
 ***************************************/

// Linking Section

#include <stdio.h>
#include <stdlib.h>

// Definition Section

// Global Declaration Section


// main Progres Section
int main()
{
  int sum = sumNumbers();
    printf("The sum of numbers from 1 to 100 is: %d\n", sum);
    return 0;
}

// Define Function Section
#include <stdio.h>

int sumNumbers() {
    int n = 100;
    int firstTerm = 1;
    int lastTerm = 100;
  
    int sum = (n / 2) * (firstTerm + lastTerm);
  
    return sum;
}
