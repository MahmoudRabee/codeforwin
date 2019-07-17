//Write a C program to insert an element in an array. 

#include<stdio.h> 

void main()
{
	int arr[7] ,element,position ;
	int i   ; 
	for(i=0 ; i<=5;i++)
	{
		printf("Please Enter the element %d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Input element to insert: ");
	scanf("%d",&element);
	printf("Input position where to insert: ");
	scanf("%d",&position); 
	
	for(i=6 ; i> position;i--)
	{
		arr[i] = arr[i-1] ;
	}
	arr[position] = element ; 
	for(i=0 ; i<=6;i++)
	{
		printf("Element %d= %d \n",i,arr[i]);
		
	}
	
}