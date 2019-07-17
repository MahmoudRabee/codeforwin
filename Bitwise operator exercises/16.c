//C program to check even or odd using bitwise operator

#include<stdio.h>
void main(void){
	int number ; 
	printf("Input number: ");
	scanf("%d" , &number) ; 

	if(number & 1){
		printf("%d is odd" ,number);
	}
	else {
		printf("%d is even" ,number);
	}

	
}