//C program to find diameter, circumference and area of circle using function


#include<stdio.h>

float findDiameter(float radius);
float findCircumference (float radius);
float findArea (float radius); 


void  main()
{
	float radius ; 
	printf("Please Enter raduis: ");
	scanf("%f" , &radius) ; 
	
	printf("Diameter: %f\n",findDiameter(radius));
	printf("Circumference: %f\n",findCircumference(radius));
	printf("Area: %f\n",findArea(radius));


}


float findDiameter(float radius)
{
	return radius*2 ; 
}
float findCircumference (float radius)
{
	return 2*3.14*radius ; 
}
float findArea (float radius)
{
	return 3.14 * radius * radius ; 
}
