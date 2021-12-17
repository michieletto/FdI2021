#include <stdio.h>
#include <stdlib.h>

int massimo(FILE * i) 
{
	int v;
	int finefile;
	finefile = fscanf(i,"%d", &v);
	if (finefile == EOF)
		return 0;
	else 
	{
		int m = massimo(i);
		if (m > v) 
			return m;
		else 
			return v;
	}
}

int main(void) {
    char filename[] = "test_file.txt"; 
    FILE *f; 

    if(NULL == (f = fopen(filename, "r")))
    {
        printf("fopen() failed!\n");
        exit(EXIT_FAILURE);
    }

    printf("Massimo nel file: %d\n", massimo(f));

    exit(EXIT_SUCCESS);
}