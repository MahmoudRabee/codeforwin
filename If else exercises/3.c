//C program to check whether a number is positive, negative or zero

#include<stdio.h>
void main(void){
	int number ; 
	printf("Input number: ");
	scanf("%d" , &number);

	if(number > 0 ) {
		printf("The number is positive");
	}
	else if (number < 0 ) {
		printf("The number is negative");
	}
	else {
		printf("The number is zero ");
	}

	
}