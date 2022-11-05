#include <stdio.h>

int main() {
  int i;
    while (i != 6) {
    printf("Try to guess the number: ");
    scanf("%i", &i);
    if (i > 6) {
      printf("Bigger than %i\n", i);
    }
    if (i < 6) {
      printf("Less than %i\n", i);
    }
    if (i > 6 || i < 6) {
      printf("Number is less than 10\n");
      printf("Number can devide by 2\n");
      printf("Number can't devide by 3\n");
    }
  }
  printf("You won!\n");
}