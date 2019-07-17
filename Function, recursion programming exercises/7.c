//C program to print all strong numbers between given interval using function


#include<stdio.h>
int factorial(int);
void printStrong(int , int );
char isStrong(int);
void  main()
{
int start , end ; 
	printf("Enter lower limit: ");
	scanf("%d" , &start) ; 
	printf("Enter upper limit: ");
	scanf("%d" , &end) ;
	
printStrong(start , end); 

}

int factorial(int number)
{
	int i , result = 1 ; 
	for (int i = 1; i <= number; ++i)
	{
		result *= i ; 
	}
	
	return result ; 
	
}

void printStrong(int lower , int upper )
{
	int i ; 
	for(i = lower ; i < upper ; i++)
	{
		if(isStrong(i))
	printf("%d, ",i); 
	}
}

char isStrong(int number)
{
	int copy , sum = 0 ; 
	copy = number ;
	while(copy != 0 )
	{
		sum += factorial(copy%10);
		copy/=10 ;
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