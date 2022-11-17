#include <stdio.h>

#define MAX_ARRAYSIZE (50)

int main(void) {
  int array[MAX_ARRAYSIZE];
  int n_values, i;
  int min = 0;
  int max = 0;
  int mid = 0;
  int sum = 0;

  printf("enter n values --> ");
  if (scanf("%d", &n_values) != 1) {
    fprintf(stderr, "bad array size read - exiting \n");
    return 1;
  } else if (n_values <= 0 || n_values >= MAX_ARRAYSIZE) {
    fprintf(stderr, "%d: bad value - must be > 0 and less than %d\n",
            n_values, MAX_ARRAYSIZE);
    return 1;
  }

  for (i = 0; i < n_values; i++) {
    printf("enter value for array[%d] --> ", i);
    if (scanf("%d", &array[i]) != 1) {
      fprintf(stderr, "bad array entry read - exiting \n");
      return 1;
    }
  }

  for (i = 0; i < n_values; i++) {
    sum = sum+array[i];
    if (i == 0) {
      min = array[i];
      max = array[i];
    } else {
      if (min >= array[i]) {
        min = array[i];
      }
      if (max <= array[i]) {
        max = array[i];
      }
    }
  }
  mid = sum/n_values;
  printf("\nMin number is: %i", min);
  printf("\nMax number is: %i", max);
  printf("\nSum of numbers: %i\n", sum);
  printf("\nArithmetic mean: %i", mid);

  return 0;
}