//C program to enter student marks and find percentage and grade

#include<stdio.h>
void main(void){
	float Percentag  , Physics , Chemistry , Biology , Mathematics , Computer ; 
	printf("Input marks of five subjects: ");
	scanf("%f%f%f%f%f" , &Physics , &Chemistry , &Biology , &Mathematics , &Computer);
	Percentag = (Physics + Chemistry + Biology + Mathematics + Computer) / 5.0 ; 
	printf("percentag: %f\n" , Percentag);

	if(Percentag >= 90)
    {
        printf("Grade A");
    }
    else if(Percentag >= 80)
    {
        printf("Grade B");
    }
    else if(Percentag >= 70)
    {
        printf("Grade C");
    }
    else if(Percentag >= 60)
    {
        printf("Grade D");
    }
    else if(Percentag >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

	
}