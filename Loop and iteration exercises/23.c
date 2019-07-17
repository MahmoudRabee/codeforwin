//C program to find factorial of a number

#include<stdio.h>
void main(void){
	int number , result = 1  ; 
	printf("Input number: ");
	scanf("%d" , &number); 

	for (int i = 1; i <= number; ++i)
	{
		result *= i ; 
	}
	printf("factorial:  %d",result );
	
}