//C program to flip all bits of a binary number

#include<stdio.h>
void main(void){
	int number , order = 100; 
	printf("Input any number: ");
	scanf("%d",&number);

	printf("Number after bits are flipped: %d (in decimal)", ~number);
	
}