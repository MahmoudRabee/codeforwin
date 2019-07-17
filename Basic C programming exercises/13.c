//C program to find angles of triangle if two angles are given

#include<stdio.h>
void main(void){
	float angle1 , angle2 ; 
	printf("Enter first angle: ");
	scanf("%f", &angle1) ; 
	printf("Enter second angle: ");
	scanf("%f" , &angle2);

	printf("Third angle = %.2f" , 180 - (angle1 + angle2));
	
}