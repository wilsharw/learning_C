/*Ask the user to type two integer values at the termianl.Test these two numbers
to determine if the first is evenly divisible by second, and display an
messgae*/

#include <stdio.h>
int main(void)

{
  int value1, value2;
  float number;

  printf("Enter a non negative number 1:  \n");
  scanf("%i", &value1);
  printf("Enter a non negative number 2:  \n");
  scanf("%i", &value2);

  if (value2 == 0) {
    printf("The answer is undefined");
    return 0;
  }

  number = (float)value1 / value2;

  printf("%.3f \n", number);
  return 0;
}
