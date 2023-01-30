#include <stdio.h>
#include <string.h>

int main () {
    char str[100];

    printf("Enter any word: ");
    gets(str);

    int strLength = strlen(str);

    if (strLength > 0 && strLength < 100) {
        for (int i = 0; i < strLength; i++) {
            str[i] = str[i + 1];
        }
        printf("Delete first char in the word: ");
        puts(str);
    }
    return 0;
}
