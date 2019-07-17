//C program to check Leap Year

#include<stdio.h>
void main(void){
	int year , isleap ; 
	printf("Input year: ");
	scanf("%d" , &year) ; 

if ((year % 4 ==0) && (year % 100 != 0 ))
	{
		printf("%d is leap year ",year );
	}
	else if (year % 400 == 0)
	{
		printf("%d is leap year ",year );
	}
	else {
		printf("%d is not leap year ",year );
	}
	
}