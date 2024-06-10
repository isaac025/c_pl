#include <stdio.h>

#define TABSTOP 4       /* fixed number of spaces for tab */
#define MAXLINE 1000    /* maximum input line length */

int get_line(char line[], int maxline);
int replace(char line[], int index);

/* replaces tabs for spaces */
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
    int c, i, count;
    count = TABSTOP;
    for (i = 0; i < lim-1 
            && (c=getchar()) != EOF && c != '\n'; ++i) {
        if (c == '\t')
            i = replace(s, i);
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

/* replace: the current tab for N spaces in 'str' and return the 'index' */
int replace(char str[], int index) 
{
    int count;
    
    count = TABSTOP;
    while (count > 0) {
        str[index] = ' ';
        ++index;
        --count;
    }
    return index;
}
