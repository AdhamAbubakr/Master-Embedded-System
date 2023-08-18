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
int num, i;
int main()
{
    printf("please Enter number : ");
    scanf("%d", &num);

    binary(num);

    return 0;
}
void binary(int decimal)
{
    int binary[30], index = 0;
    if (decimal == 0)
    {
        printf("\n 0");
    }

    while (decimal > 0)
    {
        binary[index] = decimal % 2;
        decimal /= decimal;
        index++;
    }
    for (i = index - 1; i >= 0; i--)
    {
        printf("\n%d", binary[i]);
    }
}

// Define Function Section
