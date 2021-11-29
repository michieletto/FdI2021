#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 10

int main () {
    char message[] = "The quick brown fox jumps over the lazy dog";

    char dest[MAX_STR_LEN+1];

    strncpy(dest, message, MAX_STR_LEN);
    dest[MAX_STR_LEN] = '\0';

    printf("%s\n", dest);
    return 0;
}