//C program to check whether a number is palindrome or not

#include<stdio.h>
void main(void){
	int number , reversed  , temp; 
	printf("Input num: ");
	scanf("%d" , &number ); 
	temp = number ; 
	while(number != 0 ){
		reversed =(reversed*10) + number % 10 ;
		number/=10;
	}
		
	if(reversed == temp ){
		printf("%d is palindrome" , temp);
	}
	else {
		printf("%d is not palindrome" , temp);
	}
	
}