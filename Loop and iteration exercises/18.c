// C program to count frequency of digits in an integer

#include<stdio.h>
void main(void){
	int number ;
	char f0 = 0 , f1 = 0 , f2 = 0 , f3 = 0 , f4 = 0 , f5 = 0 , f6 = 0 ,f7 = 0 ,f8 = 0 ,f9 = 0 ; 
	printf("Input num: ");
	scanf("%d" , &number ); 

	while(number != 0 ){
		switch(number % 10){
			case 0 :
			f0++ ; 
			break ;
			case 1 :
			f1++ ; 
			break ;
			case 2 :
			f2++ ; 
			break ;
			case 3 :
			f3++ ; 
			break ;
			case 4 :
			f4++ ; 
			break ;
			case 5 :
			f5++ ; 
			break ;
			case 6 :
			f6++ ; 
			break ;
			case 7 :
			f7++ ; 
			break ;
			case 8 :
			f8++ ; 
			break ;
			case 9 :
			f9++ ; 
			break ;

		}
		number/=10;
	}
	
	printf("Frequency of 0 = %d\nFrequency of 1 = %d\nFrequency of 2 = %d\nFrequency of 3 = %d\nFrequency of 4 = %d\nFrequency of 5 = %d\nFrequency of 6 = %d\nFrequency of 7 = %d\nFrequency of 8 = %d\nFrequency of 9 = %d\n",f0,f1,f2,f3,f4,f5,f6,f7,f8,f9 );
}