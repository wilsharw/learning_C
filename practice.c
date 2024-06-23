//Alligning the code/

#include <stdio.h>

int main(void)
{
    int sum, n, count;

    for (count = 1; count <= 10;++count)
    {
        printf("Enter a non negative integer: ");
        scanf("%i", &n);
        sum = 0;

        for (; n != 0; n = n / 10)
        {
            sum = sum+ (n % 10) ;

        }
            printf("the sum of digits is %i\n", sum);

    }

        return 0;
}