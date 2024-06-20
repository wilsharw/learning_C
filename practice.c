//generate a tavle of triangularnumber/

#include <stdio.h>

int main(void)
{
    int n,triangular_num;

    printf("Table of Triangular numbers\n\n");
    printf("n             numbers through 1 to 10\n");
    printf("____         ________________________\n");

    triangular_num = 0;

    for (n = 1; n <= 10; n=n+1)
        
            {triangular_num = triangular_num + n;
            printf("%i           %i\n", n, triangular_num);}
    
return 0;
}