//Table for factorial number//

#include <stdio.h>

int main(void)
{
    int x, n, Factorial_value;
    printf("Display the Factorial value from 1 to 10\n");
    printf("n                   factorial value\n");
    printf("----              -------------------\n");

    
    for (n = 1; n <= 10; n = n + 1)
    {
        Factorial_value = 1;
        for (x = n; x > 1; x = x - 1)
            Factorial_value = Factorial_value * x;
        printf("%i               %i\n", n, Factorial_value);
    }
    return 0;
}