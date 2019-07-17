//C program to find all roots of a quadratic equation using switch case

#include<stdio.h>
#include <math.h>
void main(void){
	float a , b , c ;
	printf("Input a:"); 
	scanf("%f" , &a);
	printf("Input b:");
	scanf("%f" , &b);
	printf("Input c:");
	scanf("%f" , &c);

	switch(((b*b) - 4 * a *c) > 0 ){
		case 1 : 
		printf("root 1 = %f\nroot 2 = %f\n ",(-b + sqrt((b*b) - 4 * a *c))/(2*a),(-b - sqrt((b*b) - 4 * a *c))/(2*a));
		break ; 
		default  :
		switch(((b*b) - 4 * a *c) < 0){
			case 1 : 
			printf ("the two roots is : %f" , (-1*b)/(2*a)); 
			break; 
			default : 

			printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", 
				-b / (2 * a), sqrt(-(((b*b) - 4 * a *c))) / (2 * a), -b / (2 * a), sqrt(-(((b*b) - 4 * a *c))) / (2 * a));
		}
	}
	
}