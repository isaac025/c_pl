#include <stdio.h>

/* count blanks */
int main() {
    int c, blnk;

    blnk = 0;
    while ((c = getchar()) != EOF)
        if (c == ' ' || c == '\t' || c == '\n')
            ++blnk;
    printf("%d\n", blnk);

    return 0;
}
