//program to implement the sign function//
#include<stdio.h>
int main (void)

{
    int number,sign;

    printf("Please enter the number:");
    scanf("%i", &number);

    if (number<0)
        sign = -1;
    else if (number ==0)
        sign = 0;
    else
        sign = 1;

    printf("Sign=%i\n", sign);

    return 0;
}
