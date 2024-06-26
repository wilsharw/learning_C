//Program exercise 5.6_nested if else//

#include<stdio.h>
int main (void)

{
    char c;

    printf("Please enter a single character:");
    scanf("%c", &c);

    if ((c>='A' && c<='Z') || (c>='a' && c<='z'))
        printf("It is a alphabetical character");
    else if (c>='0' && c<='9')
        printf("It is a numerical character");
    else
        printf("It is a special character");

    return 0;
}
