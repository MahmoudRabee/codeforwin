// Write a C program to find sum of all array elements. - using recursion.


#include<stdio.h> 

int sumArray(int arr[] ,  int index);
void main()
{
	int arr[5]  ;
		int i ; 
	for(i=0 ; i<=5;i++)
	{
		printf("Please Enter the element %d: ",i);
		scanf("%d",&arr[i]);
	}
	
printf("Sum of element = %d" , sumArray(arr , 5));
}



int sumArray(int arr[] , int index)
{
	if (index < 0 )
	{
		return 0 ; 
	}
	else 
	{
		
		return arr[index] + sumArray(arr , index-1) ; 
	}
}
