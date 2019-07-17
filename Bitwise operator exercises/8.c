//C program to get lowest order or first set bit of a number

#include<stdio.h>
void main(void){
	int number , order = 100; 
	printf("Input any number: ");
	scanf("%d",&number);

	for (int i =0; i <32 ; i++)
	{
		if(number & 1<< i){
			order = i+1 ;
			break ; 
		}
	}

	if(order == 100){
		printf("the number is zero !");
	}
	else{
		printf("lowest order set bit in %d is %d.",number,order );
	}

	
}