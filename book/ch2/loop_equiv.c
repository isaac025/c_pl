#include <stdio.h>

#define MAX 1000 /* arbitrary number */

/* loop equivalent without logical operators */
int main() {
    char c;
    int i, lim;
    char s[MAX];

    lim = MAX;
    for (i = 0; i < lim - 1  ; ++i) {
        if ((c=getchar()) != '\n') break;
        if (c != EOF) break;
        s[i] = c;
    }

    return 0;
}
