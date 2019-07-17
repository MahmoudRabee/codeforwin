//C program to find square root of a number

#include<stdio.h>
#include <math.h>
void main(void){
	float number ; 
	printf("Enter any number: ");
	scanf("%f", &number) ; 

	printf("Square root of %.2f = %.2f", number , sqrt(number));
	
}