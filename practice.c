/*Ask the user to type two integer values at the termianl.Test these two numbers
to determine if the first is evenly divisible by second, and display an
messgae*/

#include <stdio.h>
int main(void)

{
  int number, value1, value2;

  printf("Enter a non negative number 1:  \n");
  scanf("%i", &value1);
  printf("Enter a non negative number 2:  \n");
  scanf("%i", &value2);

  number = (value1 / value2);

  if (number % 2 == 0)
    printf("The number is evenly divisible.\n");
  if (number % 2 != 0)
    printf("The number is not evenly divisible.\n");

  return 0;
}
