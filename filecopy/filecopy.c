#include <stdio.h>

main() { /* copy input to output 1st version */

    int c;
    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
    
    
    /* v2
    int c;
    c = getchar();

    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    */
}