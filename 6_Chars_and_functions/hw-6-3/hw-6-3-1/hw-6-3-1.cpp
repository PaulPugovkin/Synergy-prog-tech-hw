#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter any word: ");
    gets(str);

    printf("Second char of the word: %c", str[1]);

    return 0;
}