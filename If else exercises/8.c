//C program to check vowel or consonant

#include<stdio.h>
void main(void){
	char ch ; 
	printf("Input character: ");
	scanf("%c" ,&ch) ; 

	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
		printf("character is vowel");
	}
	else {
		printf("character is consonant");
	}
	
}