//C program to find reverse of a number

#include<stdio.h>
void main(void){
	int number , reversed ; 
	printf("Input num: ");
	scanf("%d" , &number ); 
	printf("Reverse of %d = ", number);
	while(number != 0 ){
		reversed =(reversed*10) + number % 10 ;
		number/=10;
	}
	printf("%d",reversed );
}