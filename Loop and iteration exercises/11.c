//C program to find first and last digit of any number

#include<stdio.h>
void main(void){
	int number , lastBit ;
	printf("Input number: ");
	scanf("%d" , &number) ; 
printf("first bit : %d\n",number % 10);
	while(number != 0 ){
		lastBit = number % 10 ; 
		number/=10;
	}
	printf("Last bit : %d  ", lastBit);
}