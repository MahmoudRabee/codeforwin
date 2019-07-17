//C program to calculate electricity bill

#include<stdio.h>
void main(void){
	float amount , total ; 
	printf("Enter the amount: ");
	scanf("%f" , &amount);

	if(amount <= 50 ){
		total = amount * .5 ;
	}
	else if (amount > 50 && amount <= 100){
		total = 25 + (amount-50)*.75 ;
	}
	else if (amount > 100 && amount <= 200){
		total = 100 + (amount-100)*1.20 ;
	}
	else {
		total = 220 + (amount-200)*.75 ;
	}
	total = total + .2 * total ; 

	printf("total electricity bill :%f",total );
	
}