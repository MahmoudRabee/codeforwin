//C program to print all Armstrong numbers between given interval using function


#include<stdio.h>
#include <math.h>
char isArmstrong(int number);
void printArmstrong(int,int);
void  main()
{
	int start , end ; 
	printf("Enter lower limit: ");
	scanf("%d" , &start) ; 
	printf("Enter upper limit: ");
	scanf("%d" , &end) ;
	
printArmstrong(start , end); 


}

void printArmstrong(int lower,int upper)
{
	int i ; 
	for(i = lower ; i < upper ; i++)
	{
		if(isArmstrong(i))
	printf("%d, ",i); 
	}
}

char isArmstrong(int number)
{
	int i  ,copy,power = 0 ,sum = 0 ; 
	copy = number ; 
	while(copy != 0 )
	{
		power++;
		copy/=10 ; 
	}
	copy = number ;
	for(i = 0 ; i<power ; i++)
	{
		sum += pow(copy%10,power);
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