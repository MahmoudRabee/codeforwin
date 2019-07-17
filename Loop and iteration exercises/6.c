//C program to find sum of natural numbers from 1 to n

#include<stdio.h>
void main(void){
int number , sum = 0  ; 
	printf("Input upper limit: ");
	scanf("%d" , &number) ; 
	
	for (int i = 1; i <= number; ++i)
	{
		sum+= i ; 
	}
	printf("Sum of all numbers between 1 and %d = %d ",number , sum );
}