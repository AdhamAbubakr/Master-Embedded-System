#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//seudo code 
//1- We Will Storage the String in char of arr 
//2-Take from user the string and storage it 
//3-assign char of arr == pointer 
//4-print the pointer as reverse counter 

int main ()
{
	char string1[100] ,string2[100];
	char *p1 ,*p2 ;
	
	// Gets the string 
	printf("Write original String : ");
	gets(string1);
	
	//assign at pointer by reverse 
	p1=string1+strlen(string1)-1;
	p2=string2;
	
	//loop to assign all characters 
	while(p1>=string1)
	{
		*p2=*p1;
		p2++;
		p1--;
		
	}
	*p2='\0';
	
	printf("The Reverse String is : %s ",string2);

	return 0 ;
}