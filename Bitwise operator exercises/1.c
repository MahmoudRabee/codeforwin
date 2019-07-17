//C program to check Least Significant Bit (LSB) of a number is set or not

#include<stdio.h>
void main(void){
	int number ; 
	printf("Input number: ");
	scanf("%d" , &number);

	if (number & 1){
		printf("Least Significant Bit of %d is set (1)." , number);	
	}
	else {
		printf("Least Significant Bit of %d is unset (0)." , number);
	}

	
}