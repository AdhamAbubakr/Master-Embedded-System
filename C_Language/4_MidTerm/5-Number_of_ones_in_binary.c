/*******************************************
 *	@file:main.c                           *
 *	@creator :Adham Abo Bakr               *
 *	@Description : number of ones in binay *
 *									       *
 *			****************	           *
 *			*learn in depth*   		       *
 *			**************** 		       *
 *									       *
 *******************************************/
// Linking Section
#include <stdio.h>
#include <stdlib.h>
// Definition Section
// Global Declaration Section
void binary(int decimal);
// main Progres Section
int num, i, sum = 0;
int main()
{
    printf("please Enter number : ");
    scanf("%d", &num);

    binary(num);

    return 0;
}


// Define Function Section
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
        decimal = decimal / 2;
        index++;
    }
    for (i = index - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
        if (binary[i] == 1)
        {
            sum++;
        }
        else
        {
            continue;
        }
    }
    printf("\n OUTPUT : %d", sum);
}