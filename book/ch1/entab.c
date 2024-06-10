#include <stdio.h>

#define MAXLINE 1000    /* maximum input line length */

int get_line(char line[], int maxline);
int replace(char line[], int index, char curr);

/* replaces spaces for tabs */
int main()
{
    int len;                /* current line length */
    int max;                /* maximum length seen so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];  /* longest line saved here */

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0)
        printf("%s\n", line);
    return 0;
}

/* get_line: read a line into s, return length */ 
int get_line(char s[], int lim)
{
    int c, i; 
    for (i = 0; i < lim-1 
            && (c=getchar()) != EOF && c != '\n'; ++i) {
        if (c == ' ')
            i = replace(s,i,c);
        else 
            s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* replace: the current N spaces for tab in 'str' and return the 'index' */
int replace(char str[], int index, char c) 
{
    int i;
    i = 0;
    while ((c=getchar()) == ' ')
        ++i;
    if (i == 3) {
        str[index] = '\t';
        return index + i;
    }
    else
        return index;
}
