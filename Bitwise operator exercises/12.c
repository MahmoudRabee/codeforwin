//C program to count zeros and ones in a binary number

#include<stdio.h>
void main(void){
	int number , oneCount = 0; 
	printf("Input any number: ");
	scanf("%d",&number);

	for (int i =0; i <32 ; i++)
	{
		if(number & 1<< i){
			oneCount ++ ;
		}
	}

	printf("Output number of ones: %d\nOutput number of zeros: %d",oneCount , 32 - oneCount );
	
}