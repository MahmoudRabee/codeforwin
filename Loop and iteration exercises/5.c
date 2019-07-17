//C program to print all odd numbers from 1 to n

#include<stdio.h>
void main(void){
	int number ; 
	printf("Input upper limit: ");
	scanf("%d" , &number) ; 
	printf("Odd numbers between 1 and %d: ",number );
	for (int i = 1; i <= number; ++i)
	{
		if (i % 2 != 0 ){
			printf("%d ",i );
		}
	}
	
}