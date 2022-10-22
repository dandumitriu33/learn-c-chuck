#include <stdio.h>

main() { /* count lines in input */
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            nl++;
    printf("The number of lines in the input is: %d\n", nl);
}