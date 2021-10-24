#include <stdio.h>

int simpleMCD( int v1, int v2 )
{
   if( v1 > 0 && v2 > 0 )
   {
     int mcd = (v1 < v2)?v1:v2;
     while( mcd > 1 )
     {
        if( v1%mcd == 0 && v2%mcd == 0 )
          break;
        mcd--;
      }
      return mcd;
   }
   else 
     return -1;
}

int euclideMCD( int v1, int v2 )
{
  if( v1 > 0 && v2 > 0 )
  {
    while (v1 != v2)
    {
      if (v1 > v2)
	    v1 = v1 - v2;
      else
        v2 = v2 - v1;
    }
    return v1;
  }
  else
    return -1;
}

int main()
{
  int val1, val2;
  do
  {
    printf("Inserisci due valori separati da uno spazio\n");
  }
  while( scanf("%d %d",&val1, &val2) != 2 );
  
  int mcd = simpleMCD( val1, val2);
  // int mcd = euclideMCD( val1, val2);

  if( mcd == -1) 
    printf("Dati errati\n");
  else
    printf("Massimo comun divisore : %d\n",mcd);
  
  return 0;
}
