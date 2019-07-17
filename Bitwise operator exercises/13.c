//C program to rotate bits of a number

#include<stdio.h>
void main(void){
	int number , rotations ; 
	printf("Input any number: ");
	scanf("%d",&number);
	printf("Number of rotations: ");
	scanf("%d",&rotations);
	
	printf("%d left rotated 2 times = %d" ,number ,(number << rotations)|(number >> (32 - rotations)));
	printf("\n%d right rotated 2 times = %d" ,number ,(number >> rotations)|(number << (32 - rotations)));
	
}