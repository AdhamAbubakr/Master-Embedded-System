/**************************************
 *	@file:main.c                      *
 *	@creator :Adham Abo Bakr          *
 *	@Description : reverse digits     *
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
int num[10], d, i;

int reverse(int n[10]);

// main Progres Section
int main()
{
    printf("Please Enter the number : ");

    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &num[i]);
    }

    reverse(num);
    return 0;
}

// Define Function Section
int reverse(int n[10])
{
    for (i = 10; i >= 1; i--)
    {
        printf("%d", n[i]);
    }
}