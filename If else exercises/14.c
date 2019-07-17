//C program to check whether triangle is valid or not if angles are given

#include<stdio.h>
void main(void){
	int angle1, angle2, angle3 ;
	printf("Input first angle: ");
	scanf("%d" , &angle1) ; 
	printf("\nInput second angle: ");
	scanf("%d" , &angle2) ;
	printf("\nInput third angle: ");
	scanf("%d" , &angle3) ;

	if (angle1 + angle2 + angle3 == 180 ){
		printf("The triangle is valid ");
	}  
	else {
		printf("The triangle is not valid ");
	}
}