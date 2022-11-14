#include <stdio.h>

int main() {
  int n;
  int arr[10];

  printf("enter n values --> ");
  if (scanf("%d", &n) != 1) {
    fprintf(stderr, "invalid value - exiting \n");
    return 1;
  } else if (n <= 0 || n >= 10) {
    fprintf(stderr, "%d: invalid value - must be > 0 and less than %d\n",
            n, 10);
    return 1;
  }

  for (int i=0; i<n; i++) {
    printf("Enter %i value:  ", i+1);
    scanf("%i", &arr[i]);
  }

  for(int i=0; i<n; i++) {
    printf("%2i", arr[i]);
  }
}