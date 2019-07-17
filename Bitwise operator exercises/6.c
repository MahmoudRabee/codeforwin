//C program to toggle or invert nth bit of a number

#include<stdio.h>
void main(void){
	int number , nth ; 
	printf("Input number: ");
	scanf("%d",&number);
	printf("Input nth bit to toggle: ");
	scanf("%d",&nth);

	printf("After toggling nth bit: %d (in decimal)",number ^ (1<<nth));

	
}