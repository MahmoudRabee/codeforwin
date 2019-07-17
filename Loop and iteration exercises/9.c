//C program to print multiplication table of a given number

#include<stdio.h>
void main(void){

int number, sum = 0  ; 
	printf("Input number: ");
	scanf("%d" , &number) ;

	for (int i = 0; i <= 12; ++i)
	{
		printf("%d * %d = %d \n",number , i , number * i );
	}
	
}