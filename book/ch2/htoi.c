#include <stdio.h>

int htoi(char s[]);

int main() {
    printf("123 = %d\n", atoi("123"));
    return 0;
}

/* htoi: convert s to an hex */
int htoi(char s[])
{
    int i, n;
    
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');

    return n;
}
