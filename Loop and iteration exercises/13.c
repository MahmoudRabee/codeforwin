//C program to swap first and last digit of a number

#include<stdio.h>
#include<math.h>
void main(void){
	int number , lastBit  , firstbit ,  count = 0 , tempNumber;
	printf("Input number: ");
	scanf("%d" , &number) ; 
	tempNumber = number ; 
	firstbit = number % 10;
	while(number != 0 ){
		lastBit = number % 10 ;
		count++ ;  
		number/=10;
	}
	
	// add first digit at the last
	tempNumber = (tempNumber - (lastBit * (pow(10 , count-1))))+(firstbit * (pow(10 , count-1))) ; 
	tempNumber =((tempNumber / 10 ) * 10 ) + lastBit ; 
	printf("Number after swapping first and last digit: %d",tempNumber );
}