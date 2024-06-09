#include <stdio.h>

/* remove blanks with just one */
int main() {
    int c;

    while ((c = getchar()) != EOF) { 
        if(c == ' ' || c == '\n' || c == '\t') {
            while ((c = getchar()) == ' ');
            putchar(' ');
            if(c == EOF) break;
        }
        putchar(c);
    }
            
    return 0;
}
