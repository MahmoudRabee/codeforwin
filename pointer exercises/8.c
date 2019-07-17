//Write a C program to search an element in array using pointers.

#include<stdio.h>

void main()
{
	
		int arr[10] ; 
		int * ptr = arr ; 
		int * last = &arr[9] ; 
		int i , number , index = 0 , found = 0 ;  
		int size = 10 ; 
		for(i=0 ; i< 10 ; i++)
		{
			printf("Enter element %d: ",i);
			scanf("%d" ,&ptr[i]) ; 
		}
		printf("Enter number to search: ");
		scanf("%d" , &number ); 
		
		
		while (ptr < last )
		{
			if(*ptr == number)
			{
				found = 1 ;
				break ; 
			}
			index ++ ;
			ptr++ ; 
		 
		}
		
		if(found)
		{
		printf("The number is in index: %d" , index);
		}
		else 
		{
			printf("Number Not found");
		}
	
}