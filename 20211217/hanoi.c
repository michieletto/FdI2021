#include <stdio.h>

void muoviUnDisco(int sorg, int dest)
{
  printf(" muovi un disco da %2d a %2d\n", sorg, dest);
}  

void muovi(int n, int sorg, int dest, int aux)
{
  if (n == 1)
    muoviUnDisco(sorg, dest);
  else {
    muovi(n-1, sorg, aux, dest);
    muoviUnDisco(sorg, dest);
    muovi(n - 1, aux, dest, sorg);
  }
}

int main(void)
{
  int dischi;    /* numero di dischi */
  int s, d;      /* pali sorgente e destinazione */

  printf("Numero di dischi? ");
  scanf("%d", &dischi);
  printf("Palo sorgente?     [1, 2 o 3] ");
  scanf("%d", &s);
  printf("Palo destinazione? [1, 2 o 3] ");
  scanf("%d", &d);
  printf("\nIl palo ausiliario e` %d\n", 6 - d - s);
  printf("Per %d dischi le mosse richieste sono:\n", dischi);
  muovi(dischi, s, d, 6 - d - s);
  putchar('\n');

  return 0;
}