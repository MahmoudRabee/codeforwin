// Write a C program to count total number of negative elements in an array.

#include<stdio.h> 

void main()
{
	int arr[6]  ;
		int i ,count = 0  ; 
	for(i=0 ; i<=5;i++)
	{
		printf("Please Enter the element %d: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0 ; i<=5;i++)
	{
		if(arr[i] < 0 )
		{
			count++;
		}
	}

	printf("Total number of negative elements: %d",count);
	
}