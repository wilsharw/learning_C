/*integer to English*/

#include <stdio.h>
int reverse_number(int number) {}

int main(void) {
  int integer;
  char letter;

  printf("Enter the non negative integer: ");
  scanf("%i", &integer);

  // reverse number
  integer = reverse_number(integer);

  printf("Reversed integer %d", integer);

  letter = (char)integer % 10;
  while (letter != 0) {
    integer = integer / 10;

    switch (letter) {
    case 1:
      printf("one\n");
      break;
    case 2:
      printf("two\n");
      break;
    case 3:
      printf("three\n");
      break;
    case 4:
      printf("four\n");
      break;
    case 5:
      printf("five\n");
      break;
    case 6:
      printf("six\n");
      break;
    case 7:
      printf("seven\n");
      break;
    case 8:
      printf("eight\n");
      break;
      letter = (char)integer % 10;

    case 9:
      printf("nine\n");
      break;
    case 0:
      printf("zero\n");
      break;
    default:
      printf("Unknown operator.\n");
      break;
    }

    letter = (char)integer % 10;
  }
  return 0;
}