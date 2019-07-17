//C program to find power of a number using for loop

#include<stdio.h>
void main(void){
int base , exponent , result = 1  ; 
	printf("Input base: ");
	scanf("%d" , &base);
	printf("Input exponent: ") ; 
	scanf("%d" , &exponent) ; 

	for (int i = 0; i < exponent; ++i)
	{
		result *= base ; 
	}
	printf("%d ^ %d = %d",base , exponent , result );
	
}