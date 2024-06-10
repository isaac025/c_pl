#include <stdio.h>

#define VTAB '\013' /* ASCII vertical tab */
#define BELL '\007' /* ASCII bell character */

int main() {
    printf("bell char: %c\n", BELL);
    printf("vtab char: %c\n", VTAB);
    return 0;
}
