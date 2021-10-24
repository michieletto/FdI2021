#include <stdio.h>

int val = 10;

int f()
{
  printf("f() %d\n",val);
}

int main()
{
  printf("main() %d\n",val);
  f();
}
