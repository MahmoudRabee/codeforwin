//C program to find sum of odd numbers from 1 to n

#include<stdio.h>
void main(void){
	int number, sum = 0  ; 
	printf("Input upper limit of odd number: ");
	scanf("%d" , &number) ;
	for (int i = 1; i <= number; ++i)
	{
		if (i % 2 != 0 ){
			sum += i ; 
		}
	}

	printf("Sum of all odd numbers between 1 and %d = %d ",number , sum );
	
}