//C program to check prime, armstrong, perfect number using functions


#include<stdio.h>
#include<math.h>
char isPrime(int);
char isPerfect(int);
char isArmstrong(int);
void  main()
{
	int number ; 
	printf("Enter Number: ");
	scanf("%d" , &number);
	
	if(isPrime(number))
	{
		printf("%d is Prime\n", number);
	}
	else 
	{
		printf("%d is Not Prime\n", number);
	}
	 if (isArmstrong(number))
	{
		printf("%d is Armstrong number\n",number);
	}
	else
	{
		printf("%d is Not Armstrong number\n",number);
	}
	if (isPerfect(number))
	{
		printf("%d is Perfect number\n", number);
	}
	else 
	{
		printf("%d is Not Perfect number\n", number);
	}
	


}


char isPrime(int number)
{
	int i ; 
	for(i =2 ; i< number; i++)
	{
		if(number%i == 0 )
		{
			return 0 ; 
		}
	}
	return 1 ; 
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