//C program to find maximum between two numbers using switch case

#include<stdio.h>
void main(void){
	int number1 , number2 ; 
	printf("Input first number: ");
	scanf("%d" , &number1);
	printf("Input second number: ");
	scanf("%d" , &number2) ; 

	switch( number1 > number2 ){
		case 0: 
		printf("maximum: %d" , number2);
		break ; 
		default : 
		printf("maximum: %d" , number1);

	}
	
}