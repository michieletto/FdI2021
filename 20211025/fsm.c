#include <stdio.h>

typedef enum { READY, BUSY, WAITING, RUNNING} Status;

int main()
{
  Status s = BUSY;
  switch (s)
    {
    case READY:
      printf("Status READY\n");
      break;
    case BUSY:
      printf("Status BUSY\n");
      break;
    case WAITING:
      printf("Status WAITING\n");
      break;
    case RUNNING:
      printf("Status RUNNING\n");
      break;
    default:
      printf("Status UNKNOWN");
      break;
    }
}
