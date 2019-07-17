//C program to find maximum between three numbers using conditional operator

#include<stdio.h>
void main(void){
	int firstNumber , secondNumber , thirdNumber; 
	printf("Input first number: ");
	scanf("%d",&firstNumber) ; 
	printf("Input second number:");
	scanf("%d",&secondNumber);
	printf("Input third number:");
	scanf("%d",&thirdNumber);

if(firstNumber > secondNumber && firstNumber > thirdNumber){
		printf("Maximum: %d",firstNumber );
	}
	else if (secondNumber > thirdNumber)
	{
		printf("Maximum: %d",secondNumber );
	}
	else {
		printf("Maximum: %d",thirdNumber );
	}

	
	
}