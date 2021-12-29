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


/* Function to merge the two sub-vector 
   v[l..m] and v[m+1..r] into v[l..r] */
void merge(int *v, int l, int m, int r)
{
  int n1 = m - l + 1, n2 =  r - m;
  /* create temp array */
  int *tmp_v1=(int*)malloc(n1*sizeof(int)); 
  int *tmp_v2=(int*)malloc(n2*sizeof(int)); 

  /* Copy data to temp  tmp_v1[] and tmp_v2[] */
  for(int i = 0; i < n1; i++) 
    tmp_v1[i] = v[l + i];
  for(int j = 0; j < n2; j++) 
    tmp_v2[j] = v[m + 1 + j];

  /* Merge the temp arrays back into v[l..r]*/
  int i = 0, j = 0, k = l;
  while (i < n1 && j < n2)
  {
    if ( tmp_v1[i] <= tmp_v2[j] )
      v[k++] = tmp_v1[i++];
    else
      v[k++] = tmp_v2[j++];
  }

  /* Copy the remaining elements of  
     tmp_v1[], if there are any */
  while (i < n1)
    v[k++] = tmp_v1[i++];

  /* Copy the remaining elements of 
     tmp_v2[], if there are any */
  while (j < n2)
    v[k++] = tmp_v2[j++];
  
  free(tmp_v1);
  free(tmp_v2);
}


/* v : pointer of the array, l : left index, r : right index of the sub-array v[l..r] to be sorted */
void mergeSort(int *v, int l, int r)
{
  if (l < r)
  {
    // Divide...
    int m = (l+r)/2;
    mergeSort(v, l, m);
    mergeSort(v, m+1, r);
    // … and merge
    merge(v, l, m, r);
  }
}


int main(void) {
  int v[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 0, 1, 2, 3, 4, 5};

  printf("Pre-order:");
	printArray(v, sizeof(v)/sizeof(v[0]));

	mergeSort(v, 0, sizeof(v)/sizeof(v[0]));

	printf("\nPost-order:");
	printArray(v, sizeof(v)/sizeof(v[0]));

  return 0;
}