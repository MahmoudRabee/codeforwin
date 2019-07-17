//C program to check whether a character is Uppercase or Lowercase

#include<stdio.h>
void main(void){
	char ch ; 
	printf("Enter any character: ");
	scanf("%c" , &ch);



	if(ch >= 'a' && ch <= 'z') 
	{
		printf("'C' is Lowercase alphabet");
	}
	
	else {
		printf("'C' is uppercase alphabet");
	}

	
}