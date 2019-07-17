//C program to find all roots of a quadratic equation

#include<stdio.h>
#include <math.h>
void main(void) {
	float a , b , c ;
	printf("Input a:"); 
	scanf("%f" , &a);
	printf("Input b:");
	scanf("%f" , &b);
	printf("Input c:");
	scanf("%f" , &c);
	if (((b*b) - 4 * a *c) > 0 ) {
		printf("root 1 = %f\nroot 2 = %f\n ",(-b + sqrt((b*b) - 4 * a *c))/(2*a),(-b - sqrt((b*b) - 4 * a *c))/(2*a));
	}
	else if (((b*b) - 4 * a *c) < 0 ){
		printf ("the two roots is : %f" , (-1*b)/(2*a)); 
	}  
	
	
}