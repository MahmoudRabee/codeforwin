//Write a C program to delete an element from an array at specified position.

#include<stdio.h> 

void main()
{
	int arr[7] ,position ;
	int i   ; 
	for(i=0 ; i<=6;i++)
	{
		printf("Please Enter the element %d: ",i);
		scanf("%d",&arr[i]);
	}

	printf("Input position where to delete: ");
	scanf("%d",&position); 
	
	for(i=position ; i<=5;i++)
	{
		arr[i] = arr[i+1];
		
	}
	for(i=0 ; i<=6;i++)
	{
		printf("Element %d= %d \n",i,arr[i]);
		
	}
	
}