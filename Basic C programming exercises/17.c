//C program to calculate Simple Interest

#include<stdio.h>
void main(void){
	float principle , time , rate ; 
	printf("Enter principle: ");
	scanf("%f" , &principle);
	printf("Enter time: ");
	scanf("%f" , &time);
	printf("Enter rate: ");
	scanf("%f" , &rate);

	printf("Simple Interest = %.6f", principle * time * rate /100 );
	
}