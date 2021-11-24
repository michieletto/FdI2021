#include <stdio.h>
#include <stdlib.h>

int *find_greater_than(int arr[], int n, int value) {
    for (int i = 0; i < n; i++) {
        if (arr[i] > value)
            return &arr[i];
    }
    return NULL;
}

int main(void) {
    int array[] = { 1, 2, 5, 100, 2, 200, 3, 12, 22, 5, 1 };
    int n = (int)(sizeof(array) / sizeof(array[0]));

    while (1) {
        int *found = find_greater_than(array, n, 50);
        if (found)
            *found = - *found;
        else
            break;
    }

    int i;
    for (i = 0; i < n; i++) {
        printf("array[%2d]: %d\n", i, array[i]);
    }
    return 0;
}