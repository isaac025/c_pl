#include <stdio.h>

int main() {
    int c;
    
    printf("EOF != %d\n", EOF != getchar());
    while ((c = getchar()) != EOF)
        putchar(c);
    return 0;
}
