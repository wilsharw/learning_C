//program to determine if its a leap year or not//
#include<stdio.h>
int main (void)

{
    int year,rem_4,rem_100,rem_400;

    
    printf("Enter the year:");
    scanf("%i", &year);

    rem_4 = year % 4;
    rem_100 = year % 100;
    rem_400 = year % 400;

    if((rem_4 == 0 && rem_100 != 0) || rem_400 == 0)
     printf("It is a leap year!");
    else 
     printf("It is not a leap year!");

    

    return 0;
}
