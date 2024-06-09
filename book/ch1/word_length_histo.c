#include <stdio.h>

#define IN      1   /* inside a word */
#define OUT     0   /* outside a word */
#define MAX     100 /* max word length */

/* histogram of word length */
int main() {
    int maxwl[MAX];
    int i, c, j, wl, state, fmax;
    
    state = OUT;
    wl = fmax = 0;

    for(i = 0; i < MAX; ++i)
        maxwl[i] = 0;

    while ((c = getchar()) != EOF) { 
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            if (wl > 0 && wl < MAX) {
                if (wl > fmax)
                    fmax = wl;
                maxwl[wl]++;
            }
            wl = 0;
        }
        else {
            state = IN;
            wl++;
        }
    }

    for (i = 0; i < fmax; ++i)
        printf("___");

    printf("\n");
    for (i = fmax; i > 0; --i) {
        printf("%2d", i);
        for (j = 0; j <= fmax; ++j) {
            if (maxwl[j] >= i) 
                printf("|%2s", "");
            else
                printf("%3s", "");
        }
    }

    for (i =0; i <= fmax; ++i){
        if(i <= 10)
            printf("%2s%d","",i);   
        else
            printf("%3d",i);
    }
    
    printf("\n");
    for(i = 0; i < fmax; ++i)
        printf("___");
    
    printf("\n");   
    return 0;
}
