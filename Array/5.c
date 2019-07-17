//Write a C program to find second largest element in an array.

#include<stdio.h> 

void main()
{
	int arr[6]  ;
		int i , max1=0 , max2=0 ; 
	for(i=0 ; i<=5;i++)
	{
		printf("Please Enter the element %d: ",i);
		scanf("%d",&arr[i]);
	}
	max1 = arr[0] ; 
	for(i=0 ; i<=5;i++)
	{
		if(arr[i] > max1)
		{
			max1=arr[i];
		}
	}
	for(i=0 ; i<=5;i++)
	{
		if(arr[i] > max2 && arr[i]!=max1)
		{
			max2=arr[i];
		}
	}
	
	printf("Second maximum number is: %d", max2);
	
	
	
}