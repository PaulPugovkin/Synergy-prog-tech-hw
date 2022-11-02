#include <stdio.h>

int isLeapYear(int year) {
    if (year%4 == 0) {
        printf("Year is leap, ");
    } else {
        printf("Year is not leap, ");
    }
    return 0;
}

int chineseCalendar(int year) {
    switch(year%12) {
        case 1: {
            printf("Rooster, ");
        }
        break;
        case 2: {
            printf("Dog, ");
        }
        break;
        case 3: {
            printf("Boar, ");
        }
        break;
        case 4: {
            printf("Rat, ");
        }
        break;
        case 5: {
            printf("Bull, ");
        }
        break;
        case 6: {
            printf("Tiger, ");
        }
        break;
        case 7: {
            printf("Cat, ");
        }
        break;
        case 8: {
            printf("Dragon, ");
        }
        break;
        case 9: {
            printf("Snake, ");
        }
        break;
        case 10: {
            printf("Horse, ");
        }
        break;
        case 11: {
            printf("Sheep, ");
        }
        break;
        case 0: {
            printf("Monkey, ");
        }
        break;
        default: {
            printf("Error, try again");
        }
    }
    return 0;
}

int zodiacSign(int month, int day) {
    if ((month == 12 && day >= 22)||(month == 1 && day <= 19)) {
        printf("Zodiac: Capricorn ");
    }
    if ((month == 1 && day >= 20)||(month == 2 && day <= 19)) {
        printf("Zodiac: Aquarius ");
    }
    if ((month == 2 && day >= 20)||(month == 3 && day <= 20)) {
        printf("Zodiac: Pisces ");
    }
    if ((month == 3 && day >= 21)||(month == 4 && day <= 20)) {
        printf("Zodiac: Aries ");
    }
    if ((month == 4 && day >= 21)||(month == 5 && day <= 20)) {
        printf("Zodiac: Taurus ");
    }
    if ((month == 5 && day >= 21)||(month == 6 && day <= 20)) {
        printf("Zodiac: Gemini ");
    }
    if ((month == 6 && day >= 21)||(month == 7 && day <= 22)) {
        printf("Zodiac: Cancer ");
    }
    if ((month == 7 && day >= 23)||(month == 8 && day <= 22)) {
        printf("Zodiac: Leo ");
    }
    if ((month == 8 && day >= 23)||(month == 9 && day <= 22)) {
        printf("Zodiac: Virgo ");
    }
    if ((month == 9 && day >= 23)||(month == 10 && day <= 22)) {
        printf("Zodiac: Libro ");
    }
    if ((month == 10 && day >= 23)||(month == 11 && day <= 22)) {
        printf("Zodiac: Scorpio ");
    }
    if ((month == 11 && day >= 23)||(month == 12 && day <= 21)) {
        printf("Zodiac: Saggitarius ");
    }
    return 0;
}

int main() {
    int d,m,y;
    printf("Enter birth year: ");
    scanf("%i", &y);
    printf("Enter birth month: ");
    scanf("%i", &m);
    printf("Enter birth day: ");
    scanf("%i", &d);
    
    isLeapYear(y);
    chineseCalendar(y);
    zodiacSign(m, d);
}