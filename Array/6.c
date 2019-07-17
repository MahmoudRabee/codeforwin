// Write a C program to count total number of even and odd elements in an array.

#include<stdio.h> 

void main()
{
	int arr[6]  ;
		int i ,even = 0 , odd =0 ; 
	for(i=0 ; i<=5;i++)
	{
		printf("Please Enter the element %d: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0 ; i<=5;i++)
	{
		if(arr[i]%2 == 0 )
		{
			even++;
		}
		else
		{
			odd++; 
		}
	}

	printf("Even numbers is %d \n Odd numbers is %d",even,odd);
	
}
