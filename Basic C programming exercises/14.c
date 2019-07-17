//C program to find area of a triangle

#include<stdio.h>
void main(void){
	float base , height ; 
	printf("Enter base of the triangle: ");
	scanf("%f" , &base); 
	printf("Enter height of the triangle: ");
	scanf("%f", &height);

	printf("Area of the triangle = %.2f sq. units", 0.5 * base * height); 
}