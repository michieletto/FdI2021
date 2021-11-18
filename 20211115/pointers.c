#include <stdio.h>

int main(void) {
    int foo = 42;
    int *foo_ptr = &foo;

    printf("foo: %d      foo_ptr: %p\n", foo, foo_ptr);

    int bar = *foo_ptr;
    printf("bar: %d\n", bar);

    *foo_ptr = 5000;
    printf("foo: %d\n", foo);
    printf("bar: %d\n", bar);
    printf("foo_ptr: %d\n", *foo_ptr);

    foo_ptr = &bar;

    printf("foo_ptr: %d\n", *foo_ptr);

    return 0;
}
