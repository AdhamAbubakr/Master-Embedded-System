/* 
	Name :Adham Abo bakr 
	Projcet : Complex number with structure function 
	date :14 /8/2023 
	
	                                                 */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Global Variable 

typedef struct Scomplex {
	
	float real ;
	float imagine ;
	
} complex ;


//Globale function 

complex add(complex f, complex s );

int main ()
{
	complex f,s,temp ;
	
	printf("\n Please enter the Real  and imaginary number For first  respectively : ");
	scanf("%f%f ",&f.real ,&f.imagine);
	
	printf("\n Please enter the Real  and imaginary number For Secound  respectively : ");
	scanf("%f%f ",&s.real,&s.imagine);
	
	temp=add(f,s);
	printf("\n temp is =%lf +%l.1fi ",temp.real ,temp.imagine);

	return 0 ;
}


complex add(complex f, complex s )
{
	complex temp ;
	temp.real=f.real + s.real;
	temp.imagine=f.imagine+s.real;
	
	return(temp);
}
