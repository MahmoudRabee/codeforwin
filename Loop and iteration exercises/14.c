// /C program to find sum of digits of a number

#include<stdio.h>
void main(void){
	int number , sum = 0  ; 
	printf("Input num: ");
	scanf("%d" , &number ); 

	while(number != 0 ){
		sum+= number %10 ; 
		number/=10;
	}
	printf("Sum of digit: %d",sum );
}