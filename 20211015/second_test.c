#include <stdio.h>

int main() 
{
  float val1, val2, result;

  printf("Inserire il primo valore seguito dal tasto Enter\n");
  scanf ("%f", &val1);

  printf("Inserire il secondo valore seguito dal tasto Enter\n");
  scanf ("%f", &val2); 

  result = val1 + val2;
  printf("La somma due valori e' : %f\n", result);

  result = val1 - val2;
  printf("La differenza due valori e' : %f\n", result);

  result = val1 * val2;
  printf("Il prodotto due valori e' : %f\n", result);

  result = val1/val2;
  printf("Il quoziente dei due valori e' : %f\n", result);

  result = (val1 + val2)/2;
  printf("La media dei due valori e' : %f\n", result);

  return 0;
}
