//C program to check even or odd number using switch case

#include<stdio.h>
void main(void){
	int number  ; 
	printf("Input any number: ");
	scanf("%d" , &number);
	
	switch( number % 2 == 0 ){
		case 0: 
		printf("number is Odd ");
		break ; 
		default : 
		printf("number is Even");

	}
	
}