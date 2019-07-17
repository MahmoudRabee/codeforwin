//C program to check Most Significant Bit (MSB) of a number is set or not

#include<stdio.h>

void main(void){
	int number ; 
	printf("Input number: ");
	scanf("%d" , &number);

	if (number & 1<<31){
		printf("most Significant Bit (MSB) of %d is set (1)." , number);	
	}
	else {
		printf("most Significant Bit (MSB) of %d is unset (0)." , number);
	}
	
}