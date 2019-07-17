//C program to check whether triangle is valid or not if sides are given

#include<stdio.h>
void main(void){

	int side1 , side2 , side3 ; 
	printf("Input first side: ");
	scanf("%d" , &side1) ; 
	printf("Input second side: ");
	scanf("%d" , &side2);
	printf("Input third side: " );
	scanf("%d",&side3 );
	
	if ((side1 <(side2 + side3)) && ((side2 <(side1 + side3)))&&((side3 <(side2 + side1)))){
		printf("Triangle is valid");
	}
	else {
		printf("Triangle is not valid");
	}
}