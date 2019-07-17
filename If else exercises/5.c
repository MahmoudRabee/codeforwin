//C program to check even or odd number using conditional operator

#include<stdio.h>
void main(void){
	int number ; 
	printf("Input num: ");
	scanf("%d" , &number); 

	if(number % 2 == 0 ){
		printf("%d is even", number);
	} 
	else {
		printf("%d is odd ", number );
	}
	
}