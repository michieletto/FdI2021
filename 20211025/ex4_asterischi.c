#include <stdio.h>

int main()
{
  int height;
  printf("Inserire l'altezza della piramide\n");
  scanf("%d", &height);
  for (int r = 1; r <= height; r++) 
  {
    // Stampa gli spazi bianchi iniziali    
    for (int i = 1; i <= height - r; i++)
        printf(" ");
    // Stampa la sequenza di asterischi
    for (int i = 1; i <= r * 2 - 1; i++)
        printf("*");
    printf("\n");
  }
  
  return 0;
}
