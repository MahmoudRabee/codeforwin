//C program to get nth bit of a number

#include<stdio.h>
void main(void){
	int number , nth ; 
	printf("Input number: ");
	scanf("%d" , &number);
	printf("Input nth bit number: ");
	scanf("%d",&nth) ; 

	if (number & 1<<nth){
		printf("%d bit of 1%d is set (1)",nth,number);
	}
	else {
		printf("%d bit of %d is unset (0)",nth,number);
	}
	
}