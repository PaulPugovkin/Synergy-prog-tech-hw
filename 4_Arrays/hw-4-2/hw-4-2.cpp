#include <stdio.h>

int main() {
  int arr[100];
  int n = 0;
  bool sorting = true;

  printf("Enter n values: ");
  if (scanf("%i", &n) != 1) {
    fprintf(stderr, "invalid value - exiting \n");
    return 1;
  } else if (n <= 0 || n >= 100) {
    fprintf(stderr, "%d: invalid value - must be > 0 and less than %d\n",
            n, 10);
    return 1;
  }

  for (int i=0; i<n; i++) {
    printf("\nEnter %i value: ", i+1);
    scanf("%i", &arr[i]);
  }

  while (sorting) {
    sorting = false;
    for (int i=0; i<n-1; i++) {
      if (arr[i]>arr[i+1]) {
        int buffer = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = buffer;
        sorting = true;
      }
    }
  }

  for (int i=0; i<n; i++) {
    printf("%i ", arr[i]);
  }

}