/**************************************
 *	@file:main.c                      *
 *	@creator :Adham Abo Bakr          *
 *	@Description :Prime_number	      *
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
int n1, n2, i;
// main Progres Section
int main()
{
    printf("please Enter n1 : ");
    scanf("%d", &n1);
    printf("\n please Enter n2 : ");
    scanf("%d", &n2);
    prime_number(n1, n2);
    return 0;
}
// Define Function Section
int prime_number(int s1, int s2)
{
    for (i = s1; i < s2; i++)
    {  if (i % 2 == 1)
        { printf("%d\n", i); }
        else
        {  continue; }
    }
}