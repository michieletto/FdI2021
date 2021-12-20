#include <stdio.h>
#include <stdbool.h>

void printArray(int *v, int dim) {
	printf("\n[");
	for (int i=0; i < dim - 1; i++)
	{
		printf(" %d,", v[i]);
	}
	printf(" %d]\n", v[dim-1]);
}

void bubbleSort ( int * a, int n ) 
{
  bool ordered = false;
  for ( int i = 0; i < n - 1 && !ordered ; i++) 
  {
    ordered = true;

    for ( int j = 0; j < n-i-1 ; j++ )
    {
      if ( a [j] > a [ j + 1 ]) 
      {
        int aux = a [j];
        a [j] = a [ j + 1 ];
        a [ j + 1 ] = aux;
        ordered = false;
      }   
    }
  }
}


int main(void) {
    int v[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 0, 1, 2, 3, 4, 5};

    printf("Pre-order:");
	printArray(v, sizeof(v)/sizeof(v[0]));

	bubbleSort(v, sizeof(v)/sizeof(v[0]));

	printf("\nPost-order:");
	printArray(v, sizeof(v)/sizeof(v[0]));

    return 0;
}