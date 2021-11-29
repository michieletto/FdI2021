#include <stdio.h>

int my_strlen(const char str[]) {
    int len = 0;
    for (len = 0; str[len] != '\0'; len++)
    {
        /* Do nothing */
    }
    return len;    
}

int main() {
    char msg[] = "Hello, world!";
    char a = 'a';

    printf("%s\n", msg);

    printf("String lenght: %d\n", my_strlen(msg));
    
    return 0;
}