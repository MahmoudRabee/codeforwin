//C program to check even or odd number using conditional operator

#include<stdio.h>
void main(void){
	int number ; 
	printf("Input num: ");
	scanf("%d" , &number); 
	printf("%d is %s",number , (number % 2 == 0 ) ? "even" :"odd" );

		
}