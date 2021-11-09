#include <stdio.h>

long factorial(long n) {
    if (n <= 1)
        return 1;
    return n * factorial(n-1);
}

int main(void) {
    printf("5! = %ld\n", factorial(5));
}
