#include <stdio.h>

main() { /* test power function */
    int i;
    for (i = 0; i < 10; i++) 
    printf("i=%d \t 2**i=%d \t -3**i=%d\n", i, power(2, i), power(-3, i));
}

power(x, n) /* raise x to the n-th power; n > 0 */
int x, n;
{
    int i, p;
    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * x;
    return (p);
}