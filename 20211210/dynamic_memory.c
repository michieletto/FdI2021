#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* a;
    int n_ints = 3;

    a = (int*) malloc(sizeof(int) * n_ints);
    if (!a) {
        printf("ERROR!");
        return -1;
    }

    for(int i = 0; i < n_ints; i++) {
        a[i] = (rand() % 10);
    }

    for (int i = 0; i < n_ints; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    free(a);
    a = NULL;

    return 0;
}