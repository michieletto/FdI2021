#include <stdio.h>
#include <stdint.h>

int main(void) {
    int numbers[] = { 42, -73, 131, 7600, 5, 899, 2837, -8, 183, 415 };

    int *ptr1 = &numbers[0];
    int *ptr2 = ptr1 + 1;

    printf("*ptr1:%4d\n", *ptr1);
    printf("*ptr2:%4d\n", *ptr2);
    printf("\n");
    printf("ptr2 - ptr1: %d\n", (int)(ptr2 - ptr1));
    printf("\n");
    printf("sizeof(ptr1) : %ld\n", sizeof(ptr1));
    printf("sizeof(*ptr1): %ld\n", sizeof(*ptr1));
    printf("\n");
    intptr_t repr_ptr1 = (intptr_t) ptr1;
    intptr_t repr_ptr2 = (intptr_t) ptr2;
    printf("repr_ptr1: 0x%08lx    ptr1: %p\n", (unsigned long)repr_ptr1, ptr1);
    printf("repr_ptr2: 0x%08lx    ptr2: %p\n", (unsigned long)repr_ptr2, ptr2);
    printf("\n");
    printf("repr_ptr2 - repr_ptr1: %ld\n", (unsigned long)(repr_ptr2 - repr_ptr1));

    return 0;
}