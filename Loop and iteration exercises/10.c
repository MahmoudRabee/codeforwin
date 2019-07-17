//C program to count number of digits in an integer

#include<stdio.h>
void main(void){
	int number , count = 0  ; 
	printf("Input num: ");
	scanf("%d" , &number ); 

	while(number != 0 ){
		count++ ; 
		number/=10;
	}
	printf("Number of digits: %d",count );
	
}