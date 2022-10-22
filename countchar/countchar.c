#include <stdio.h>

main() { /* count characters in input */

    double nc;
    for (nc = 0; getchar() != EOF; nc++)
        ;
    printf("The number of characters in the input is: %.0f\n", nc);

    /* version 2
    long nc;
    nc = 0;
    while (getchar() != EOF)
        nc++;
    printf("The number of characters in the input is: %ld\n", nc);
    */
}