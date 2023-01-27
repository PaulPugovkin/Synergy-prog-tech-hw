#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter any word: ");
    gets(str);

    int strLength = strlen(str);

    printf("The last char of the word is: %c", str[strLength - 1]);

    char boofer = str[0];
    str[0] = str[strLength - 1];
    str[strLength - 1] = boofer;

    printf("Change first and last chars in the word: ");
    puts(str);

    return 0;
}