#include <stdio.h>
#include <stdlib.h>

void printArray(int *v, int dim) {
	printf("\n[");
	for (int i=0; i < dim - 1; i++)
	{
		printf(" %d,", v[i]);
	}
	printf(" %d]\n", v[dim-1]);
}

/* Scambia il contenuto 
   delle locazione i e j
   dell'array v */
void swap(int v[], int i, int j)
{
  int tmp = v[i];
  v[i] = v[j];
  v[j] = tmp;
}

void quicksort(int v[], int n)
{
   if(n <= 1) //Array di dimensioni minima
    return;   // non occorre ordinare nulla
  /* Muovo il pivot alla posizione 0: posso 
    scandire sequenzialmente il resto 
    dell'array, a partire dalla pos. 2 */
  swap(v, 0, rand()%n);
  /* Partizione dell'array */
  int last = 0;
  for(int i = 1; i < n; i++)
    if(v[i] < v[0])
      swap(v, ++last, i);
  /* Inserisco il pivot 
     nella posizione corretta */
  swap(v, 0, last);
  /* Ricorsivamente ordino ognuna 
     delle 2 partizioni */
  quicksort(v, last);
  quicksort(v+last+1,n-last-1);
}

int main(void) {
    int v[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 0, 1, 2, 3, 4, 5};

    printf("Pre-order:");
	printArray(v, sizeof(v)/sizeof(v[0]));

	quicksort(v, sizeof(v)/sizeof(v[0]));

	printf("\nPost-order:");
	printArray(v, sizeof(v)/sizeof(v[0]));

    return 0;
}

