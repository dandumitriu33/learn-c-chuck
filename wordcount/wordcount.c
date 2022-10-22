#include <stdio.h>

#define YES 1
#define NO 0

main() { /* count lines, words, chars in input */
    int c, nl, nw, nc, inword;
    inword = NO;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        nc++;
        if (c == '\n')
            nl++;
        if (c == ' ' || c == '\n' || c == '\t')
            inword = NO;
        else if (inword == NO) {
            inword = YES;
            nw++;
        }
    }
    printf("Found: %d lines, %d words, %d characters.\n", nl, nw, nc);
}