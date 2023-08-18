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
void reverseWords(char* str);

//main Progres Section 

int main()
{
	    char str[] = "Hello, world! How are you?";
		printf("Original string: %s\n", str);
		reverseWords(str);
		printf("Reversed string: %s\n", str);
 return 0;
}

// Define Function Section 
void reverseWords(char* str) {
    int length = strlen(str);
    int i, j;

    // Reverse the entire string
    for (i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // Reverse each word individually
    i = 0;
    while (i < length) {
        // Skip leading spaces
        while (i < length && str[i] == ' ') {
            i++;
        }

        // Find the start and end indices of the word
        j = i;
        while (j < length && str[j] != ' ') {
            j++;
        }

        // Reverse the word
        int wordStart = i;
        int wordEnd = j - 1;
        while (wordStart < wordEnd) {
            char temp = str[wordStart];
            str[wordStart] = str[wordEnd];
            str[wordEnd] = temp;
            wordStart++;
            wordEnd--;
        }

        i = j;
    }
}
