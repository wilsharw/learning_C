//program to calculate the absolute value of the integer//
#include<stdio.h>
int main (void)

{
    int number;
    printf("Type the number:  ");
    scanf("%i", &number);

    if(number<0)
        number = -number;

    printf("The number is %i\n", number);

    return 0;
}