//C program to find maximum between two numbers using conditional operator

#include<stdio.h>
void main(void){
	int firstNumber , secondNumber ; 
	printf("Input first number: ");
	scanf("%d",&firstNumber) ; 
	printf("Input second number:");
	scanf("%d",&secondNumber);

	
	printf("Maximum: %d",firstNumber > secondNumber ? firstNumber : secondNumber );
	
	
	
}