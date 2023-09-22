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


//Linking Section 

#include<stdio.h>
#include<stdlib.h>

//Definition Section


//Global Declaration Section
int BetweenZeros(int arr[], int size);

//main Progres Section 

int main() {
    int arr[] = {1,1,0,1,1,1,0,1,1,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    int maxOnes = BetweenZeros(arr,size);
    printf("The maximum number of ones between two zeros is: %d\n", maxOnes);

    return 0;
}

// Define Function Section 
int BetweenZeros(int arr[], int size) 
    int maxCount = 0;
    int count = 0;
    int foundZero = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            foundZero = 1;
            count = 0;
        }
        else if (foundZero) {
            count++;
            if (count > maxCount) {
                maxCount = count;
            }
        }
    }

    return maxCount;
}
