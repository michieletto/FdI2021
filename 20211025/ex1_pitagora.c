#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tab_size;
  do
  {
    printf("Inserisci la dimensione "
            "compresa tra 1 e 10\n");
  }
  while( scanf("%d",&tab_size) != 1 ||  tab_size <= 0 || tab_size > 10 );

  int r, c;  for( r = 1; r <= tab_size; r++ )
  {
    for( c = 1; c <= tab_size; c++ )
      printf("%5.d",r*c);
    printf("\n");
  }
  
  return 0;
}
