//C program to check whether a character is alphabet, digit or special character

#include<stdio.h>
void main(void){
	char ch ; 
	printf("Enter any character: ");
	scanf("%c" , &ch);



	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		printf("Character is an ALPHABET.");
	}
	else if ((ch >= '0' && ch <= '9'))
	{
		printf("Character is DIGIT.");
	}
	else {
		printf("Character is special character");
	}
	
	
}