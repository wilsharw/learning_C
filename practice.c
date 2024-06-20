//program to calculate the 200th triangular number using for loop//

#include <stdio.h>

int main(void)
{
    int n,triangular_num;

    triangular_num = 0;

    for (n = 1; n <= 200; n=n+1)
        
            triangular_num = triangular_num + n;
            printf("The vaue of the 200th triangular_num is %i\n", triangular_num);
    



    return 0;
}