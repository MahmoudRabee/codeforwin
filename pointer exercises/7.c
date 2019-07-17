//Write a C program to reverse an array using pointers.

#include<stdio.h>

void main()
{
		int arr[10] ; 
		int * ptr = arr ; 
		int * last = &arr[9] ; 
		int i  , temp; 
		int size = 10 ; 
		for(i=0 ; i< 10 ; i++)
		{
			printf("Enter element %d: ",i);
			scanf("%d" ,&ptr[i]) ; 
		}
		
		
		while (ptr < last )
		{
			temp = *ptr ; 
			*ptr = *last ; 
			*last = temp ; 
			
			ptr++ ; 
			last-- ; 
		}
		
		
		for(i =0 ; i<10 ; i++)
		{
			printf("Elememt %d = %d\n" , i , arr[i]) ; 
		}
	
}