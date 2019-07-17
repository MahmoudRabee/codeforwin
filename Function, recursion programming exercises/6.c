//C program to find prime numbers in given range using functions


#include<stdio.h>
int printPrime(int , int );
char isPrime(int);
void  main()
{
	int start , end ; 
	printf("Enter lower limit: ");
	scanf("%d" , &start) ; 
	printf("Enter upper limit: ");
	scanf("%d" , &end) ;

	printPrime(start , end); 	
	
}

int printPrime(int lower, int upper )
{
	int i ;
	printf("Prime number between %d and %d is: ",lower , upper) ; 
	for(i=lower ; i<= upper ; i++)
	{
		if(isPrime(i))
		{
			printf("%d ,",i);
		}
	}
}

char isPrime(int number)
{
	int i ; 
	for(i =2 ; i< number ; i++)
	{
		if(number%i == 0 )
		{
			return 0 ; 
		}
	}
	return 1 ; 
}