//C program to calculate Compound Interest

#include<stdio.h>
#include<math.h>
void main(void){
		float principle , time , rate , CI ; 
	printf("Enter principle(amount): ");
	scanf("%f" , &principle);
	printf("Enter time: ");
	scanf("%f" , &time);
	printf("Enter rate: ");
	scanf("%f" , &rate);
	CI = principle * pow((1+rate/100),time) ; 
	printf("Compound Interest = %.6f",CI );
	
	
}