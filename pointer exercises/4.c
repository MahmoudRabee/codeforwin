//Write a C program to input and print array elements using pointer.

#include<stdio.h>

void main()
{
		int arr[10] ; 
		int * ptr = arr ; 
		int i ; 
		for(i=0 ; i< 10 ; i++)
		{
			printf("Enter element %d: ",i);
			scanf("%d" ,&ptr[i]) ; 
		}
		
		for(i =0 ; i<10 ; i++)
		{
			printf("Elememt %d = %d" , i , arr[i]) ; 
		}
}