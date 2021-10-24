#include <stdio.h>

float div( float n, float den )
{
	return n/den;
}

int main()
{
	float num = 2, den = 0; 

	if(den != 0 && div(num, den) > 1)
		printf("Quoziente > 1");

    return 0;
}
