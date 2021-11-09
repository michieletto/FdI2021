#include <stdio.h>

int bloop = 1;

void simple_function(void)
{
    printf("%-20s [1] - bloop:%d\n", "simple_function()", bloop);
    {
        int bloop = 3;
        printf("%-20s [2] - bloop:%d\n", "simple_function()", bloop);
    }
    printf("%-20s [3] - bloop:%d\n", "simple_function()", bloop);
}

void cool_function(void) 
{
    int bloop = 2;
    printf("%-20s [1] - bloop:%d\n", "cool_function()", bloop);
    {
        int bloop = 3;
        printf("%-20s [2] - bloop:%d\n", "cool_function()", bloop);
    }
    printf("%-20s [3] - bloop:%d\n", "cool_function()", bloop);
}

int main(void) 
{
    int bloop = 42;
    printf("%-20s [1] - bloop:%d\n", "main()", bloop);
    
    simple_function();
    cool_function();

    printf("%-20s [2] - bloop:%d\n", "main()", bloop);

    return 0;
}
