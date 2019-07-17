//C program to convert decimal to binary number system using bitwise operator

#include<stdio.h>
void main(void){
	int number ; 
	printf("Input any number: ");
	scanf("%d",&number);
	printf("Binary number: ");
	for (int i = 31; i >= 0; --i)
	{
		if (number & 1<<i)
		{
			printf("1");
		}
		else {
			printf("0");
		}
		
	}
}