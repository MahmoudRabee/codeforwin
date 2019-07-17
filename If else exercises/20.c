//C program to enter basic salary and calculate gross salary of an employee

#include<stdio.h>
void main(void){
	float salary ; 
	printf("Input basic salary of an employee: ");
	scanf("%f" , &salary) ; 
	if (salary <= 10000)
	{
		printf("gross salary = %.2f", salary + (salary * 0.2) + (salary * 0.8));
	}
	else if (salary <= 20000 ){
		printf("gross salary = %.2f", salary + (salary * 0.25) + (salary * 0.9));
	}
	else {
		printf("gross salary = %.2f", salary + (salary * 0.3) + (salary * 0.95));
	}
	
}