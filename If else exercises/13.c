//C program to count total number of notes in given amount

#include<stdio.h>
void main(void){
	int amount ; 
	printf("Input amount: ");
	scanf("%d" , &amount) ; 

	if (amount >= 500 ){
		printf("500 : %d", (amount / 500));
		amount = amount - ((amount / 500 ) * 500) ; 
	}
	else {
		printf("500 : 0") ; 
	}
	if (amount >= 100 ){
		printf("\n100 : %d",amount / 100);
		amount = amount - ((amount / 100 ) * 100) ; 
	}
	else {
		printf("\n100 : 0") ; 
	}
	if (amount >= 50 ){
		printf("\n50 : %d",amount / 50);
		amount = amount - ((amount / 50 ) * 50) ; 
	}
	else {
		printf("\n50 : 0") ; 
	}
	if (amount >= 20 ){
		printf("\n20 : %d",amount / 20);
		amount = amount - ((amount / 20 ) * 20) ; 
	}
	else {
		printf("\n20 : 0") ; 
	}
	if (amount >= 10 ){
		printf("\n10 : %d",amount / 10);
		amount = amount - ((amount / 10 ) * 10) ; 
	}
	else {
		printf("\n10 : 0") ; 
	}
	if (amount >= 5 ){
		printf("\n5 : %d",amount / 5);
		amount = amount - ((amount / 5 ) * 5 ) ; 
	}
	else {
		printf("\n5 : 0") ; 
	}
	if (amount >= 2 ){
		printf("\n2 : %d",amount / 2);
		amount = amount - ((amount / 2 ) * 2 ) ; 
	}
	else {
		printf("\n2 : 0") ; 
	}
	if (amount >= 1 ){
		printf("\n1 : %d",amount);
		
	}
	else {
		printf("\n1 : 0") ; 
	}

	
}