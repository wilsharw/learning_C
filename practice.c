/*iEvaluate the polynomial*/

#include <stdio.h>

int main(void) {

  double polynomial;

  polynomial = (double)((3.31 * (10e-8)) * 2.01 * (10e-7)) /
               ((7.16 * (10e-6)) + (2.01 * (10e-8)));

  printf("The value of polynomial is %e\n", polynomial);

  return 0;
}