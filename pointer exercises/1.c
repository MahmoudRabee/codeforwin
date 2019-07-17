//Write a C program to create, initialize and use pointers.

#include<stdio.h>

void main()
{
	int x = 60 ; 
	int * ptr ; 
	ptr = &x ; 
	
	printf("Adress of x is: %p" , ptr); 
	printf("\nValue of x is: %d",*ptr);
}