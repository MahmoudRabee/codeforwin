//C program to check alphabets using Conditional operator

#include<stdio.h>
void main(void){
	char ch ; 
	printf("Enter any character: ");
	scanf("%c" , &ch);

	printf("%c is %s",ch,((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ? "ALPHABET":"NOT ALPHABET"));
	
}