// C program to declare, initialize, input and print array elements


#include<stdio.h> 

void printArray(int arr[] ,  int index);
void main()
{
	int arr[5]  ;
		int i ; 
	for(i=0 ; i<=5;i++)
	{
		printf("Please Enter the element %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	printArray(arr , 5);
	
}



void printArray(int arr[] , int index)
{
	if (index == 0 )
	{
		printf("Element %d=%d\n",index , arr[index]);
	}
	else 
	{
		printArray(arr , index-1);
		printf("Element %d=%d\n",index , arr[index]);
	}
}
