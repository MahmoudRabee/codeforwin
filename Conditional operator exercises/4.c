//C program to check leap year using Conditional operator

#include<stdio.h>
void main(void){
	int year , isleap ; 
	printf("Input year: ");
	scanf("%d" , &year) ; 

	isleap = ((year % 4 ==0) && (year % 100 != 0 )) ? 1 : 0 ; 
	if (!isleap){
		isleap = (year % 400 == 0) ? 1 : 0 ; 
	}
	printf("%d is %s year",year , (isleap) ? "leap" : "not leap" );
	
}