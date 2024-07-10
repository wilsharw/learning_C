/*iEvaluate the polynomial*/

#include <stdio.h>

int main(void) {

  float x, polynomial;
  x = 2.55;
  polynomial = (float)(3 * (x * x * x)) - (5 * (x * x)) + (6);

  printf("The value of polynomial is %f\n", polynomial);

  return 0;
}