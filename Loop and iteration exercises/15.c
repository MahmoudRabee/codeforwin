//C program to find product of digits of a number

#include<stdio.h>
void main(void){
	int number , product = 1  ; 
	printf("Input num: ");
	scanf("%d" , &number ); 

	while(number != 0 ){
		product*= number %10 ; 
		number/=10;
	}
	printf("product of digit: %d",product );
	
}