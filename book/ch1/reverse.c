#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int get_line(char line[], int maxline);
void reverse(char string[], int len);

/* print the longest input line */
int main()
{
    int len;                /* current line length */
    char line[MAXLINE];     /* current input line */

    while ((len = get_line(line, MAXLINE)) > 0) {
        reverse(line, len);
    }
    return 0;
}

/* get_line: read a line into s, return length */ 
int get_line(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* reverse: reverse string 's' of length 'l' */ 
void reverse(char s[], int l)
{
    int i, r = 0;
    char tmp[l];
    for (i = l-1; i >= 0; --i) {
        tmp[r] = s[i];
        ++r;
    }
    printf("%s", tmp);
}
