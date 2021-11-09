#include <stdio.h>

// No user input
// 0 - 200 km

int main(void) {
    // km_to_miles = 0.62137119
    const float km_to_miles = 0.62137119;
    
    // write("km\t\tmiles")
    printf("km\t\tmiles\n");

    // for(km = 0 -> 200, incremento 10)
    for (int km = 0; km <= 200; km = km + 10) {
        //   write (km \t\t km*km_to_miles)
        printf ("%d\t\t%f\n", km, km*km_to_miles);
    }

    return 0;
}
