//C program to check positive negative or zero using switch case

#include<stdio.h>
void main(void){
	int number  ; 
	printf("Input any number: ");
	scanf("%d" , &number);

	switch(number == 0 ){
		case 1 : 
		printf("The number is Zero");
		break ; 
		default :
		switch(number > 0 ) {
			case 1 : 
			printf("The number is positive");
			break ; 
			default:
			printf("The number is negative");
		} 
	}
	
}