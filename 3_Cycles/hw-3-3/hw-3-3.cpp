#include <stdio.h>

int main() {
  float num;
  printf("enter num ");
  scanf("%f", &num);
  float sum = (num+1)*(num/2);
  printf("Sum with algorithm: %f\n", sum);
}