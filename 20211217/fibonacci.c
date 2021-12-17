#include <stdlib.h>
#include <stdio.h>

int fibonacci(int n) 
{
	if (n < 0) return -1;
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibonacci(n-1) + fibonacci(n-2);
}

int main(void) {
    int n = 15;
    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));

    return 0;
}