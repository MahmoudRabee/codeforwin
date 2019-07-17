//C program to find sum of first and last digit of any number

#include<stdio.h>
void main(void){
	int number , lastBit  , firstbit;
	printf("Input number: ");
	scanf("%d" , &number) ; 
	firstbit = number % 10;
	while(number != 0 ){
		lastBit = number % 10 ; 
		number/=10;
	}
	printf("Sum of first and last digit: %d", lastBit +firstbit );
}