#include <stdio.h>

int main() {
  int sum = 0;
  int num;
  printf("enter num ");
  scanf("%i", &num);
  if (num%2 == 0) {
    int sum2 = (num+1)*(num/2);
    printf("Sum with algorithm: %i\n", sum2);
  } else {
    for (int i = 1; i<=num; i++) {
      sum = sum+i;
    }
    printf("Sum with iteration: %i\n", sum);
  }
}