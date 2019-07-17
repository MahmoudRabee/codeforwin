//C program to create calculator using switch case and functions

#include<stdio.h>
void main(void){
	 char op;
    float number1, number2 ; 

    scanf("%f %c %f", &number1, &op, &number2);
	
	  switch(op)
    {
        case '+': 
            printf("%f ", number1 + number2 );
            break;

        case '-': 
            printf("%f ", number1 - number2 ) ;
            break;

        case '*': 
            printf("%f ", number1 * number2 ) ;
            break;

        case '/': 
            printf("%f ", number1 / number2 ) ;
            break;

        default: 
            printf("Invalid operator");
    }

}