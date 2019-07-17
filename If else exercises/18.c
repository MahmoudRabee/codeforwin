//C program to calculate profit or loss

#include<stdio.h>

void main(void){
	int  cost , sell;//declaring 
	printf("please enter the cost price: ");// ask user to enter cost price
	scanf("%d",&cost);
	printf("please enter the sell price: ");// ask user to enter sell price
	scanf("%d",&sell);
if(cost<=sell){
	printf("profits: %d",sell-cost); // print out profits
}	
else
	printf("losses: %d",cost -sell);// print out loss

	
}