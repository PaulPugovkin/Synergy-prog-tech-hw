#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int indexOfChar;

    printf("Enter any word: ");
    gets(str);

    int strLength = strlen(str);

    if (strLength > 100) {
        printf("Incorrect word, must have not above 100 chars");
        return 0;
    }

    printf("Char to delete: ");
    scanf("%i", &indexOfChar);

    if (indexOfChar > strLength) {
        printf("Incorrect char index");
        return 0;
    }

    for (int i = indexOfChar - 1; i < strLength; i++) {
        str[i] = str[i+1];
    }

    puts(str);

    return 0;
}