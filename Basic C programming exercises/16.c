//C program to calculate total average and percentage of five subjects

#include<stdio.h>
void main(void){
	float sub1 , sub2 , sub3 , sub4 , sub5 ;
	float total , average , percentage ;  
	printf("Enter marks of five subjects:\n");
	scanf("%f%f%f%f%f" , &sub1,&sub2,&sub3, &sub4,&sub5) ; 

	total = sub1 + sub2 + sub3 + sub4 + sub5 ; 
	average = total /5 ; 
	percentage = (total /500)*100 ;  
	printf("Total =%.2f \nAverage = %.2f \nPercentage = %.2f" ,total , average , percentage );

	
}