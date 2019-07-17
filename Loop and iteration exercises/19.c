//C program to print number in words

#include<stdio.h>
void main(void){
	int number , reversed ; 
	printf("Input num: ");
	scanf("%d" , &number ); 
	printf("Reverse of %d = ", number);
	while(number != 0 ){
		reversed =(reversed*10) + number % 10 ;
		number/=10;
	}
	while(reversed != 0 ){
		switch(reversed % 10){
			case 0 :
			printf("zero ");
			break ;
			case 1 :
			printf("One ");
			break ;
			case 2 :
			printf("Two ");
			break ;
			case 3 :
			printf("Three "); 
			break ;
			case 4 :
			printf("Four "); 
			break ;
			case 5 :
			printf("Five "); 
			break ;
			case 6 :
			printf("Six "); 
			break ;
			case 7 :
			printf("Seven "); 
			break ;
			case 8 :
			printf("eight "); 
			break ;
			case 9 :
			printf("Nine "); 
			break ;
		}
		reversed/=10;
	}
	
}