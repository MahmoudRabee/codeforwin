//C program to check even or odd using functions


#include<stdio.h>
 char isEven(int number);
 
void  main()
{
	
	int number ; 
	printf("please Enter number: ");
	scanf("%d" , &number) ; 
	
	if(isEven(number))
	{
		printf("Is even");
	}
	else 
	{
		printf("Not even");
	}

}


 char isEven(int number)
 {
	 return number%2 == 0 ?1:0;
 }
 