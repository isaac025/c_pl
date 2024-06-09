#include <stdio.h>

#define LOWER   0   /* lower limit of table */
#define UPPER   300 /* upper limit */
#define STEP    20  /* step size */

float temp_conv(int fhar);

/* print Fahrenheit-Celsius table */
int main() {
    int fahr;

    for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d %6.1f\n", fahr, temp_conv(fahr));

   return 0;
}

float temp_conv(int f) {
    return (5.0/9.0)*(f-32);
}
