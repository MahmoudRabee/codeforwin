//C program to print all natural numbers from 1 to n

#include<stdio.h>
void main(void){
	int number ; 
	printf("Input upper limit: ");
	scanf("%d" , &number) ; 
	printf("Natural numbers from 1 to %d: ",number );
	for (int i = 1; i <= number; ++i)
	{
		printf("%d ",i );
	}
	
}