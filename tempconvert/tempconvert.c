#include <stdio.h>

/*print Fahrenheit-Celsius table
for f = 0, 20, ..., 300 */

#define LOWER 0 /* lower limit of temperature table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */


main()
{
    int lower, upper, step;
    float fahr, celsius;
    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = lower;

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("\n");
    printf("----------------------\n");
    printf("Solution using a FOR loop\n");
    printf("----------------------\n");

    /* int fahr; initialization not needed - it is done above */
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%4.0f %6.1f\n", fahr, (5.0/9.0) * (fahr-32.0));

}