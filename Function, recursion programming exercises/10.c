//C program to find power of a number using recursion

#include<stdio.h>

int power(int base , int pow);
void main()
{
	int base , pow , result; 
	printf("Input base number: ");
	scanf("%d" , &base);
	printf("Input power number: ");
	scanf("%d" , &pow); 
	
	result = power(base , pow);
	printf("result is %d" , result);
	
}

int power(int base , int pow)
{
	if(pow == 1 )
	{
		return base ; 
	}
	return base*power(base , pow-1) ; 
}