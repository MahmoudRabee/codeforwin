//C program to print perfect numbers between given interval using function



#include<stdio.h>

char isPerfect(int number) ; 
void printPerfect(int,int);

void  main()
{
	int start , end ; 
	printf("Enter lower limit: ");
	scanf("%d" , &start) ; 
	printf("Enter upper limit: ");
	scanf("%d" , &end) ;
	
printPerfect(start , end); 
}

void printPerfect(int lower,int upper)
{
	int i ; 
	for(i = lower ; i < upper ; i++)
	{
		if(isPerfect(i))
	printf("%d, ",i); 
	}
}

char isPerfect(int number)
{
	int i , sum = 0 ; 
	for(i =1 ; i< number ; i++)
	{
		if(number%i == 0 )
		{
			sum += i ;   
		}
	}
	
	if(sum == number)
	{
		return 1 ; 
	}
	else 
	{
		return 0 ; 
	}
}