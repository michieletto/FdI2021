#include <stdio.h>

int main()
{
  double val_d;
  char str[20];

  /* E' necessario una stringa seguita da un carattere '=' e 
     da un valore numerico:  <str> = <val>, altrimeni scanf() fallirà */
  printf("Inserire una stringa seguita da '=' e da un valore intero\n");
  if( fscanf(stdin, "%s = %lf",str, &val_d) == 2 )
    printf("Stringa : \"%s\" valore : %f\n",str, val_d);
  else
  {
    fprintf(stderr, "Errore nell'inserimento del valore\n");
  }
  
  return 0;
}
