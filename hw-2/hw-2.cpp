#include<stdio.h>

int main() {
    int a, b;
    printf("Enter first intger");
    scanf("%i", &a);
    printf("Enter second intger");
    scanf("%i", &b);
    if (a == b) {
        printf("First and second integers are equal");
    }   else if (a > b) {
        printf("First integer is bigger than second");
    }   else if (a < b) {
        printf("Second integer is bigger than first");
    }
}