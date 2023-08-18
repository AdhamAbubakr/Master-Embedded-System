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
int OneLoop(int arr[], int size);

// main Progres Section
int main()
{
    int arr[] = {2, 4, 6, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int unique = OneLoop(arr, size);
    printf("The unique number is: %d\n", unique);
    return 0;
}

// Define Function Section


int OneLoop(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= arr[i];
    }
    return result;
}

