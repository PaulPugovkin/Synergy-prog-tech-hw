#include <stdio.h>

int sayHello() {
  int i = 1;
  while (i < 10) {
    printf("%i: Hello! ", i);
    i = i+1;
  }
  printf("\n");
  return 0;
}

int incrementAndPrint() {
  int i = 0;
  while (i < 15) {
    printf("%i ", i);
    i = i+1;
  }
  printf("\n");
  return 0;
}

int printEvenNumbers() {
  int i = 0;
  while (i < 15) {
    if (i%2==0) {
      printf("%i is even ", i);
    }
    i=i+1;
  }
  printf("\n");
  return 0;
}

int calculateIntegersIntervalSum() {
  int i = 5;
  int sum;
  while(i < 16) {
    sum = sum + i;
    i = i + 1;
  }
  printf("Sum=%i\n", sum);
  return 0;
}

int main() {
  sayHello();
  incrementAndPrint();
  printEvenNumbers();
  calculateIntegersIntervalSum();
  return 0;
}