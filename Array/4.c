//Write a C program to find maximum and minimum element in an array. - using recursion. 

#include<stdio.h> 

int max(int arr[] ,  int index);
int min(int arr[] ,  int index);
void main()
{
	int arr[5]  ;
		int i ; 
	for(i=0 ; i<=5;i++)
	{
		printf("Please Enter the element %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("maximum number is: %d", max(arr , 5));
	printf("\nminimum number is: %d", min(arr , 5));	
}



int max(int arr[] , int index)
{
	if(index == 0 )
		return arr[index] ; 
	if(arr[index] > max(arr , index-1))
		return arr[index];
	else 
		return max(arr , index-1);
}

int min(int arr[] , int index)
{
	if(index == 0 )
		return arr[index] ; 
	if(arr[index] < min(arr , index-1))
		return arr[index];
	else 
		return min(arr , index-1);
}
