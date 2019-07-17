//Write a C program to add two numbers using pointers.

#include<stdio.h>

void main()
{
	int x = 5 , y = 9 , sum ; 
	int * p1 = &x ; 
	int * p2 = &y ;
	
	sum = *p1 + *p2 ; 
	
	printf("result = %d", sum);
	
}