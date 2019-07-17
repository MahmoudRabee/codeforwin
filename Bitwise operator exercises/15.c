//C program to swap two numbers using bitwise operator

#include<stdio.h>
void main(void){
	int firstNumber , secondNumber ;
	printf("Input first number: ");
	scanf("%d",&firstNumber);
	printf("Input second number: ");
	scanf("%d",&secondNumber);

	firstNumber = firstNumber ^ secondNumber ; 
	secondNumber = firstNumber ^ secondNumber ; 
	firstNumber = firstNumber ^ secondNumber ; 

	printf("First number after swapping: %d", firstNumber);
	printf("\nSecond number after swapping: %d", secondNumber);

	
}