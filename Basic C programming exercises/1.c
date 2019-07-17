//C program to perform input output of all basic data types
#include<stdio.h>
void main(void){
	char character ; 
	int intNumber;
	float fNumber ; 
	double dNumber ; 

	printf("Enter a character: ");
	scanf("%c",&character);
	printf("Enter a integer value: ");
	scanf("%d",&intNumber);
	printf("Enter a float value: ");
	scanf("%f",&fNumber);
	printf("Enter a long value: ");
	scanf("%lf",&dNumber);

	printf("You entered character:%c\n",character);
	printf("You entered integer:%d\n",intNumber);
	printf("You entered float:%f\n",fNumber);
	printf("You entered long:%lf\n",dNumber);
	
}





