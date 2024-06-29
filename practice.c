/*Simple printing calculator*/

#include <stdio.h>
int main(void)

{
  int value1, accumulator;
  char operator;
  accumulator = 0;
  while (1) {
    printf("Enter your expression: \n");
    scanf("%i %c", &value1, &operator);

    switch (operator) {
    case '+':
      printf("%i\n", value1 + accumulator);
      accumulator = value1 + accumulator;
      break;
    case '-':
      printf("%i\n", accumulator - value1);
      accumulator = accumulator - value1;
      break;
    case '*':
      printf("%i\n", accumulator * value1);
      accumulator = accumulator * value1;
      break;
    case '/':
      if (value1 == 0)
        printf("Divisionby zero.\n");
      else
        printf("%i\n", accumulator / value1);
      accumulator = accumulator / value1;
      break;
    case 's':
      printf("%i\n", value1);
      accumulator = value1;
      break;
    case 'e':
      printf("%i\n", accumulator);
      return 0;
      break;
    default:
      printf("Unknown operator.\n");
      break;
    }
  }
  return 0;
}