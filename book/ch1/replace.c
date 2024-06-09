#include <stdio.h>

/* replace:
 * tab with \t
 * backspace with \b
 * and \ with \\
 * */
int main() {
    int c;

    while ((c = getchar()) != EOF) { 
        if(c == '\t') {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        }
        else if (c == '\b') {
            putchar('\\');
            putchar('b');
        }
        else  putchar(c);
    }
            
    return 0;
}
