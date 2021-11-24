#include <stdio.h>

void decompose(double value, long *integer_p, double *fractional_p) {
    long i;
    double f;
    
    i = (long) value;
    f = value - (double) i;
    
    if (integer_p)
        *integer_p = i;
    if (fractional_p)
        *fractional_p = f;
}

int main(void) {
    double value = 1.414213562373;
    
    long v_int;
    double v_frac;
    decompose(value, &v_int, &v_frac);

    printf("value          : %g\n", value);
    printf("integer part   : %ld\n", v_int);
    printf("fractional part: %g\n", v_frac);

    return 0;
}