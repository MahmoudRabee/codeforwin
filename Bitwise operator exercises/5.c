//C program to clear nth bit of a number

#include<stdio.h>
void main(void){
	int number , nth ; 
	printf("Input number: ");
	scanf("%d",&number);
	printf("Input nth bit to clear: ");
	scanf("%d",&nth);

	printf("Number after clearing nth bit: %d (in decimal)",number & (~(1<<nth)));


	
}