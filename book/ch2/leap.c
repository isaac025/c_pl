#include <stdio.h>

#define YEAR 2024 /* current year */

/* print leap years */
int main() {

    int year;
    for (year = 0; year < YEAR; ++year)
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            printf("%d is a leap year\n", year);

    return 0;
}
