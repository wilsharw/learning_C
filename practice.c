// Program exercise 5.9_switch statement//
// program to evalute simple expressions of the form value operator//

#include <stdio.h>
int main(void)

{
  int num, div;
  _Bool prime_num;

  for (num = 2; num <= 50; ++num) {
    prime_num = 1;
    for (div = 2; div < num; ++div) {
      if (num % div == 0) {
        prime_num = 0;
      }
    }

    if (prime_num != 0) {
      printf("%i  ", num);
    }
  }
  return 0;
}
