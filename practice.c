//asking the user for output five times//

#include <stdio.h>

int main(void)
{
    int n, n_square;
    printf("Display the value of n and n_square from 1 through 10\n");
    printf("n                   n_square\n");
    printf("----              ----------\n");
    n_square = 0;
    
    for (n = 1; n <= 10; n = n + 1)
    {
        n_square = n * n;
        printf("%i               %i\n", n, n_square);
        }
    return 0;
}