#include <stdio.h>

int f(int a)
{
    if(a < 0)
        a = 0;

    return a;
}

int main()
{
    int a = -1;
    int b = f(a);
    
    printf ("%d, %d\n", a, b); //→ -1, 0
    
    return 0;
}
