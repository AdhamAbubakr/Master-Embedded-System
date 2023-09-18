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
    int *p ,m ,*ab ;
    m=29 ;
    p=&m ;
    printf("Address of m :0x%x \n Value of m :%d ",p ,*p);
    
    printf("\n Now ab is assigned with the address of m . ");
    ab=&m ;
    printf("\n Address of pointer ab : 0x%x \n content of pointer ab :%d ",ab,*ab);
    
    *ab=34 ;
    printf("\n the value os m assigned to %d now . ",*ab);
    printf("\n Address of pointer ab : 0x%x \n Content of pointer ab :%d ",ab ,*ab);
    
    *ab=7 ;
    
    printf(" \n The pointer variable ab is assigned with the value %d now ",*ab);
    
    printf("\n Address of m :0x%x \n Value of m :%d ",ab ,*ab );
    return 0;
}

// Define Function Section
