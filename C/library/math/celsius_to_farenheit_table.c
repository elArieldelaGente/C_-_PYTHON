/* Print celsius to fahrenheit   table */

#include "/home/ari/Escritorio/REVENANT/C/library/math/celsius_to_fahr.c"

/**********************************************
    Usage:
            first argument is the lower limit (float)
            second argument is the upper limit (float)
            third argument is the step
 **********************************************/

void cels_fahr_table(double lower, double upper, int step)
{

    double celsius;

    printf("\nCelsius to Fahrenheit Table\n");

    celsius = lower;
    while (celsius <= upper)
    {
        printf("%4.2f    %6.1f\n", celsius,cel_to_fahr(celsius) );
        celsius += step;
    }
}