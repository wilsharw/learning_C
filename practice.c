//program to determine if the number is even or odd(if else)//
#include<stdio.h>
int main (void)

{
    int number, check;

    printf("Enter the number:");
    scanf("%i", &number);

    check = number % 2;

    if(check==0)
        printf("The entered number is even\n");

    if(check!=0)
        printf("The entered number is odd\n");

    return 0;
}
