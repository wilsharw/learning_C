/*Evaluate the polynomial*/

#include <stdio.h>

int main(void) {

  int i, j, next_multiple;
  i = 256;
  j = 7;

  next_multiple = (i) + (j) - (i % j);

  printf("The next multiple is %i\n", next_multiple);

  return 0;
}