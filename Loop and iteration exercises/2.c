// C program to print natural numbers in reverse from n to 1

#include<stdio.h>
void main(void){
int number ; 
	printf("Input upper limit: ");
	scanf("%d" , &number) ; 
	printf("Natural numbers from %d to 1: ", number );
	for (int i = number; i > 0; --i)
	{
		printf("%d ", i );
	}
	
}