#include <stdio.h>

int main() {
    int a;
    printf("Enter full integer from 1 to 7: ");
    scanf("%i", &a);
    switch(a) {
        case 1: {
            printf("Monday");
        }
        break;
        case 2: {
            printf("Tuesday");
        }
        break;
        case 3: {
            printf("Wednesday");
        }
        break;
        case 4: {
            printf("Thursday");
        }
        break;
        case 5: {
            printf("Friday");
        }
        break;
        case 6: {
            printf("Saturday");
        }
        break;
        case 7: {
            printf("Sunday");
        }
        break;
        default: {
            printf("Invalid input value, try to enter full number from 1 to 7 ");
            main();
        }
    };
}