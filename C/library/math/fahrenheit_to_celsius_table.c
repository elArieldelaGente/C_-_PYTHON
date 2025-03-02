/* Print fahrenheit to celsius table */

#include "/home/ari/Escritorio/REVENANT/C_-_PYTHON/C/library/math/fahr_to_celsius.c"

/**********************************************
    Usage:
            first argument is the lower limit (float)
            second argument is the upper limit (float)
            third argument is the step
 **********************************************/

void fahr_cels_table( double lower, double upper, int step ){

    double fahr;

    printf("\nFahrenheit to Celsius Table\n");

    fahr = lower;
    while (fahr <= upper) {
        printf("%4.2f    %6.1f\n", fahr, fahr_to_cel( fahr ));
        fahr += step;
    }
        
}

    

    


