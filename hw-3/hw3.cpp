#include <stdio.h>

int main() {
    int a, b;
    printf("Enter login:");
    scanf("%i", &a);
    printf("Enter password:");
    scanf("%i", &b);
    if ((a == 123 && b == 321) || (a == 456 && b == 654)) {
        printf("Welcome");
    } else {
        printf("Invalid login or password");
    }
}