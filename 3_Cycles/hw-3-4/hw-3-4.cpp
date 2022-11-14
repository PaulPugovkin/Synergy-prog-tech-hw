#include <stdio.h>

int main(void) {
  int n_values, i;
  int min = 0;
  int max = 0;
  int mid = 0;
  int sum = 0;

  printf("enter n values --> ");
  if (scanf("%d", &n_values) != 1) {
    fprintf(stderr, "invalid value - exiting \n");
    return 1;
  } else if (n_values <= 0 || n_values >= 10) {
    fprintf(stderr, "%d: invalid value - must be > 0 and less than %d\n",
            n_values, 10);
    return 1;
  }

  for (int j = 0; j < n_values; j++) {
    printf("enter %i value --> ", j+1);
    scanf("%i", &i);
      if (j == 0) {
        min = i;
        max = i;
      } else {
        if (min >= i) {
          min = i;
        }
        if (max <= i) {
          max = i;
        }
      }
      sum = sum+i;
  }

  mid = sum/n_values;

  printf("Min number is: %i\n", min);
  printf("Max number is: %i\n", max);
  printf("Sum of numbers: %i\n", sum);
  printf("Arithmetic mean: %i\n", mid);

  return 0;
}