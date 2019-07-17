//Write a C program to swap two numbers using pointers.

#include<stdio.h>

void main()
{
	
	int x=3 , y = 8 ; 
	int * ptr1 = &x ; 
	int * ptr2 = &y ; 
	
	*ptr1 += *ptr2 ;
	*ptr2 = *ptr1 - *ptr2 ; 
	*ptr1 -= *ptr2 ; 
	
	printf("x = %d\n",x);
	printf("y = %d\n",y);
	
}