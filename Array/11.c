// Write a C program to count frequency of each element in an array.

#include<stdio.h> 

void main()
{
	int arr[10] ,freq[10] ;
	int count , i , j ;  
	
	for(i=0 ; i<10;i++)
	{
		scanf("%d" , &arr[i]);
		freq[i] = -1 ; 
	}
	
	for(i=0 ; i<10 ; i++)
	{
		count = 1 ; 
		for(j=i+1 ; j< 10 ; j++)
		{
			if(arr[i]==arr[j])
			{
				count++ ; 
				freq[j] = 0 ; 
			}
		}
		
		if(freq[i] == -1 )
		{
			freq[i] = count ; 
		}
	}
	
	printf("\nFrequency of all elements of array : \n");
	for(i=0 ; i<10;i++)
	{
		if(freq[i] != 0)
		{
			printf("freq of number %d is %d\n" ,arr[i] , freq[i]);
		}
	}
	
	
	
}