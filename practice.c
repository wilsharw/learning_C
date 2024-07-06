/*integer to English*/

#include <stdio.h>

int main(void) {

  float F, C;
  F = 27;
  C = (F - 32) / (1.8);

  printf("The value of 27 degree fahrenheight in celsius is %0.2f\n", C);

  return 0;
}