/******************************************
*	@file:main.c                          *
*	@creator :Adham Abo Bakr              *
*	@Description :PRINT ALL THE ALPHAPETS *
*									      * 
*			****************	          *
*			*learn in depth*   		      *
*			**************** 		      *
*									      *   
******************************************/


//Linking Section 

#include<stdio.h>
#include<stdlib.h>

//Definition Section


//Global Declaration Section


//main Progres Section 
#include<stdio.h>

int main ()
{
	char alphapets[27];
	char *pointer ;
		
	// Address of Arrays Storage at pointers 
	pointer=alphapets ;
	
	// Here iam trying to understand about this counter , 
	//the data of i storage at pointer + a and signed inside the pointer
	// and increment 
	
	for(int i=0 ; i<26 ;i++)
	{
		*pointer=i+'a';
		pointer++;
	}
	// after this counter We are signed the pointer inside the alph more 
	pointer=alphapets;
	
	printf("The Alphapets ");
	
	// Now We will print the data storage (alphapets) in pointer 
	for(int i=0 ; i<26 ;i++)
	{
		printf("%c ",*pointer);
			pointer++ ;
	}

	
	return 0 ;
}

// Define Function Section 
