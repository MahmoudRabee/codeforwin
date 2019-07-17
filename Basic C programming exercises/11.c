//C program to find power of a number using pow function

#include<stdio.h>
#include<math.h>
void main(void){
	float base , exponent ; 

	printf("Enter base: ");
	scanf("%f",&base) ; 
	printf("Enter exponent: ");
	scanf("%f", &exponent);
	
	printf("%.2f ^ %.2f = %.2f",base,exponent,pow(base,exponent));
}