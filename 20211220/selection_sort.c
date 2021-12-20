#include <stdio.h>

void printArray(int *v, int dim) {
	printf("\n[");
	for (int i=0; i < dim - 1; i++)
	{
		printf(" %d,", v[i]);
	}
	printf(" %d]\n", v[dim-1]);
}

void selectionSort(int*v, int dim)
{
	for (int i=0; i < dim-1; i++)
	{
		int i_min = i;
       // Extract the index i_min of the
       // the minimum element in
       // v[i+1], … ,v[dim-1]
		for (int j = i+1; j < dim; j++)
		{
			// Compare v[j] with the
            // current minimum
			if (v[j] < v[i_min])
				i_min = j;
		}

		// Swap v[i] with v[i_min]
		int aux = v[i];
		v[i] = v[i_min];
		v[i_min] = aux;
	}
}

int main(void) {
    int v[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 0, 1, 2, 3, 4, 5};

    printf("Pre-order:");
	printArray(v, sizeof(v)/sizeof(v[0]));

	selectionSort(v, sizeof(v)/sizeof(v[0]));

	printf("\nPost-order:");
	printArray(v, sizeof(v)/sizeof(v[0]));

    return 0;
}