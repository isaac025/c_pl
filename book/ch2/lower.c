#include <stdio.h>

int lower(int c);

/* print upper chars to lower chars */
int main() {
    char c;

    while ((c=getchar()) != EOF)
        printf("%c -> %c\n", c, lower(c));

    return 0;
}

/* lower: convert c to lower case; ASCII only */
int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}
