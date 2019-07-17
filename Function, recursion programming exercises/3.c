//C program to find maximum and minimum using functions


#include<stdio.h>
int max(int num1 , int num2) ; 
int min(int num1 , int num2) ; 
void  main()
{
	int x  , y ; 
	printf("Enter Two numbers :");
	scanf("%d%d" , &x , &y) ; 
	
	printf("Maximun Number is : %d\n",max(x,y));
	printf("Minimun Number is : %d\n",min(x,y));


}

int max(int num1 , int num2) 
{
	return  num1>num2?num1:num2 ; 
} 
int min(int num1 , int num2) 
{
	return  num1<num2?num1:num2 ; 
}