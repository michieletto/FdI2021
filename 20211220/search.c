#include <stdio.h>

int sequentialSearch(int* v, int dim, int d)
{
  for (int i=0; i < dim; i++)
    if (v[i]==d)
      return i;
  return -1;
}

int count(int* v, int dim, int d)
{
	int c = 0;
	for (int i=0; i<dim; i++)
	  if (v[i]==d )
	    c++;
	return c;
}

int binarySearchAux(int *v, int i_min, int i_max, int d) {
  // Element d not found
  if ( i_max < i_min )
    return -1;
  
  //Split the vector in two parts
  int i_middle = i_min + (i_max -   i_min)/2;
  
  if (d < v[i_middle])
    return binarySearchAux(v, i_min,i_middle-1, d);
  else if (d > v[i_middle])
    return binarySearchAux(v, i_middle+1, i_max, d);
  else
    return i_middle;
}

int binarySearch(int *v, int dim, int d) {
  return binarySearchAux(v, 0, dim-1, d);
}

int main(void) {
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    int d = 11;

    printf("L'elemento %d e' presente alla posizione: %d\n", d, binarySearch(v, sizeof(v)/sizeof(v[0]), d));

    return 0;
}