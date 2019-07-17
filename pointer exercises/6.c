//Write a C program to swap two arrays using pointers.

#include<stdio.h>
void main()
{
		int arr1[10] , arr2[10] ; 
		int * ptr1 = arr1 ;
		int * ptr2 = arr2 ; 
		int i ; 
		printf("Array 1 :\n");
		for(i=0 ; i< 10 ; i++)
		{
			printf("Enter element %d: ",i);
			scanf("%d" ,&ptr1[i]) ; 
		}
		
		printf("Array 2 :\n");
		for(i=0 ; i< 10 ; i++)
		{
			printf("Enter element %d: ",i);
			scanf("%d" ,&ptr2[i]) ; 
		}
		
		for(i=0 ; i<10 ; i++)
		{
			*ptr1 += *ptr2 ;
			*ptr2  = *ptr1 - *ptr2 ; 
			*ptr1 -= *ptr2 ; 
			ptr1++ ;
			ptr2++ ; 
		}
		
		printf("First array : \n");
		for(i =0 ; i<10 ; i++)
		{
			printf("%d ,"  , arr1[i]) ; 
		}
		
		printf("\nSecond array : \n");
		for(i =0 ; i<10 ; i++)
		{
			printf("%d, " , arr2[i]) ; 
		
		}
}