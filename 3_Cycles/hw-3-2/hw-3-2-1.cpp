#include <stdio.h>

int main() {
  int n;
  printf("Enter number to see multiplication: ");
  scanf("%i", &n);
  if (n<10 && n>0) {
    for (int i=1; i < 10; i++) {
      printf("%i*%i=%i\n", n, i, i*n);
    }
  } else {
    printf("Invalid value, enter a number from 1 to 9");
  }
}