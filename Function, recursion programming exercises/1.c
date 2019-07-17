// C program to find cube of a number using function

#incude<stdio.h>

int cube(int x ) ; 
void  main()
{
	int number , result ; 
	printf("Input any number: ");
	scanf("%d" , &number); 


	result = cube(number); 


}

int cube(int x ) 
{
	return x * x *x ; 
}