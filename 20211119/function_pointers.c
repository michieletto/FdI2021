#include <stdio.h>

void function(int *var_ptr) {
    printf("1. var is %d   \n", *var_ptr);
    *var_ptr = 10 * (*var_ptr) + 5;
    printf("2. var is %d   \n", *var_ptr);
}

int main(void) {
    int foo = 42;
    int *foo_ptr = &foo;

    printf("1. foo is %d   \n", foo);

    function(foo_ptr);

    printf("2. foo is %d   \n", foo);

    return 0;
}
