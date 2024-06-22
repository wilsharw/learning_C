//asking the user for output five times//

#include <stdio.h>

int main(void)
{
    int n, triangular_number;
    printf("Display the value of the triangular number of every 5th number between 5 and 50\n");
    printf("n                   triangular_number\n");
    printf("----              -------------------\n");
    triangular_number = 0;

    for (n = 5;  n <= 50; n = n + 5)
    {
        triangular_number= n * (n + 1) /2;
        printf("%i               %i\n", n, triangular_number);
        }
    return 0;
}