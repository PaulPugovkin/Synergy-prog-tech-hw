#include <stdio.h>

int main() {

  int arr[10][10];
  int n,m;

  printf("Enter count of arrays: ");
  if (scanf("%i", &n) != 1) {
    fprintf(stderr, "bad array size read - exiting \n");
    return 1;
  } else if (n <= 0 || n >= 10) {
    fprintf(stderr, "%d: bad value - must be > 0 and less than 10\n",
            n);
    return 1;
  }

  printf("Enter length of arrays: ");
  if (scanf("%i", &m) != 1) {
    fprintf(stderr, "bad array size read - exiting \n");
    return 1;
  } else if (m <= 0 || m >= 10) {
    fprintf(stderr, "%d: bad value - must be > 0 and less than 10\n",
            m);
    return 1;
  }

  for(int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      printf("\n%i array, enter value of index %i: ", i+1, j);
      scanf("%i", &arr[i][j]);
    }
  }

  for(int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      printf("%i ", arr[i][j]);
    }
    printf("\n");
  }
}