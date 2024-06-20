#include<stdio.h>
int main(void)
{
    double calculate;
    calculate = ((3.31e-8) * 2.01e-7) / ((7.16e-6) + 2.01e-8);

    printf("The result is %e\n",calculate);
    return 0;
}