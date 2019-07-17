// C program to find maximum between two numbers

#include<stdio.h>
void main(void){
	int firstNumber , secondNumber ; 
	printf("Input first number: ");
	scanf("%d",&firstNumber) ; 
	printf("Input second number:");
	scanf("%d",&secondNumber);

	if (firstNumber > secondNumber)
	{
		printf("Maximum: %d",firstNumber );
	}
	else {
		printf("Maximum: %d",secondNumber );
	}
	
	
}