//Program exercise 5.9_switch statement//
//program to evalute simple expressions of the form value operator//

#include<stdio.h>
int main (void)

{
    float value_1,value_2;
    char operator;

    printf("Enter the expression:\n");
    scanf("%f%c%f", &value_1, &operator, &value_2);

    switch(operator)
        {
            case'+':
              printf("%f\n",value_1 + value_2);
              break;
            case'-':
              printf("%f\n",value_1 - value_2);
              break;
            case'*':
              printf("%f\n",value_1 * value_2);
              break;
            case'/':
              if(value_2==0)
              printf("Division by zero\n");
              else
              printf("%f\n", value_1/value_2);
              break;
            default:
                printf("Unknown operator\n");
                break;
            }
            return 0;
}

   

