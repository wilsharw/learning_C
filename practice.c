//asking the user for output five times//

#include <stdio.h>

int main(void)
{
    int n,number, triangular_num,counter;

    for (counter = 1; counter <= 5;counter=counter+1)
    {
       printf("Enter the triangle number value\n");
       scanf("%i", &number);

    triangular_num = 0;

    for (n = 1; n <=number ; n=n+1)
        
            triangular_num = triangular_num + n;
            printf("The value for triangle number %i is %i\n", number , triangular_num);
    }
return 0;
}