//C program to print number of days in a month using switch case

#include<stdio.h>
void main(void){
	int month;

    /* Input month number from user */
	printf("Enter month number(1-12): ");
	scanf("%d", &month);

	switch(month)
	{
		case 1: 
		case 3: 
		case 5: 
		case 7: 
		case 8: 
		case 10: 
		case 12: 
		printf("31 days");
		break;
		case 2: 
		printf("28/29 days");
		break;
		case 4: 
		case 6: 
		case 9:
		case 11: 
		printf("30 days"); 
	
		break;
		default: 
		printf("Invalid input! Please enter month number between 1-12");

	}
	
}