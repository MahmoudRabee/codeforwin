//C program to count leading zeros in a binary number

#include<stdio.h>
void main(void){
	int number , order = 100; 
	printf("Input any number: ");
	scanf("%d",&number);

	for (int i =0; i <32 ; i++)
	{
		if(number & 1<< i){
			order = i+1 ;
		}
	}

	if(order == 100){
		printf("the number is zero !");
	}
	else{
		printf("Output leading zeros: %d (using 4 byte signed integer)", 32-order );
	}


	
}