// Write a C program to copy all elements from an array to another array.

#include<stdio.h> 

void main()
{
	int arr[6] , arrCopy[6] ;
	int i   ; 
	for(i=0 ; i<=5;i++)
	{
		printf("Please Enter the element %d: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0 ; i<=5;i++)
	{
	arrCopy[i] = arr[i];
	}
	for(i=0 ; i<=5;i++)
	{
		printf("Element %d= %d \n",i,arrCopy[i]);
		
	}
}