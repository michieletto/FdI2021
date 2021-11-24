#include <stdio.h>

int main(void)
{
    int numbers[] = { 42, -73, 131, 7600, 5, 899, 
                    2837, -8, 183, 415 };

    int *ptr1;
    int *ptr2;

    ptr1 = &numbers[0];
    ptr2 = ptr1 + 1;

    printf("*ptr1:%4d\n", *ptr1);
    printf("*ptr2:%4d\n", *ptr2);
    printf("\n");
    printf("ptr2 - ptr1: %d\n",
           (int)(ptr2 - ptr1));

    return 0;
}