#include <stdio.h>
#include <string.h>

int main () {

    char str[100];

    char reverseStr[100];

    printf("Enter any word to reverse: ");
    gets(str);

    int strLength = strlen(str);

    if (strLength > 0 && strLength < 100) {
        for (int i = 0; i < strLength; i++) {
            reverseStr[i] = str[strLength - i - 1];
        }
        printf("Reversed word: ");
        puts(reverseStr);
    } else {
        printf("Inccorect inputed value");
        return 0;
    }

    return 0;
}