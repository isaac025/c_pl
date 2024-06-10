#include <limits.h>
#include <stdio.h>

/* print ranges of: char, short, int, and 
 * long signed and unsinged */
int main() {

    /* chars */
    printf("signed char min: %d\n", SCHAR_MIN);
    printf("signed char max: %d\n", SCHAR_MAX);
    printf("unsigned char min: %d\n", 0);
    printf("unsigned char max: %u\n", UCHAR_MAX);
    printf("\n");

    /* shorts */
    printf("signed short min: %d\n", SHRT_MIN);
    printf("signed short max: %d\n", SHRT_MAX);
    printf("unsigned short min: %d\n", 0);
    printf("unsigned short max: %u\n", USHRT_MAX);
    printf("\n");

    /* ints */
    printf("signed int min: %d\n", INT_MIN);
    printf("signed int max: %d\n", INT_MAX);
    printf("unsigned int min: %d\n", 0);
    printf("unsigned int max: %u\n", UINT_MAX);
    printf("\n");

    /* longs */
    printf("signed long min: %ld\n", LONG_MIN);
    printf("signed long max: %ld\n", LONG_MAX);
    printf("unsigned long min: %d\n", 0);
    printf("unsigned long max: %lu\n", ULONG_MAX);

}
