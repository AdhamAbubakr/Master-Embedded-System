#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	char *empname ;
	int empid ;
	
} emp;
int main ()
{
	emp empone={.empname="john" ,.empid=1001};
	emp emptwo={.empname="alex ",.empid=1002};
	emp empthree={.empname="Taylor ",.empid=1003};
	
	emp *employess[]={&empone,&emptwo,&empthree};
	emp *(*employessptr)[3]=&employess;
	
	printf("Employee Name :%s\n ",(**(*employessptr+1)).empname);
	printf("Emoployee ID : %d ",(*(*employessptr+1))->empid);
	return 0;
}