#include <stdio.h>

int isPositive( int num )
{
	return ( num >= 0)? 1:0;
}


int main() 
{
    float val;
    sizeof(char);       // 1
    sizeof(short);      // 2
    sizeof(int);        // 4
    sizeof(long int);   // 4 se 32 bit, 8 se 64 bit
    sizeof(val);        // 4
    sizeof(double);     // 8

    typedef int Length; // ha le stesse caratteristiche di un int
    Length len = 10; // len è istanza di Length

    float x1 = 1222333444.0;
    printf("x1 = %f\n", x1); // output
    x1 += 1.0;
    printf("x1 + 1.0 = %f\n", x1); // output

    enum {
        MAX_ROWS = 24,
        MAX_COLS = 80,
    };

    enum answer { YES, NO };
    enum answer result = NO;

    enum color { RED = 0, GREEN, BLUE };
    enum color channel = GREEN;

    // timer 
    double best_time;
    double second_best_time;
    double third_best_time;
    double last_time;

    // do something...


    // check if the last time is better than the current best
    if (last_time < best_time) 
    {
        third_best_time = second_best_time;
        second_best_time = best_time;
        best_time = last_time;
    }

    // if(<espressione>)
    // {
    //     blocco_istruzioni1;
    // }
    // else
    // {
    //     blocco_istruzioni2;
    // }

    int a;

    if (((a >= 5) && (a<=30)) && (a%2))
        printf("Valore dispari compreso tra 5 e 30\n");

    int x;
    int y;
    int z;

    // Equivalent expressions
    // (1)
    if ((x < y) && (y < z))
        printf("y compreso tra x e z\n");
    else
        printf("y non compreso tra x e z\n");

    // (2)
    if (x < y)
        if (y < z)
            printf("y compreso tra x e z\n");
        else
            printf("y non compreso tra x e z\n");
    else
        printf("y non compreso tra x e z\n");

    // if(<espressione1>) 
    // { 
    //     blocco_istruzioni1; 
    // } 
    // else if(<espressione2>)	
    // { 
    //     blocco_istruzioni2; 
    // }
    // ... 
    // else if(<espressioneN>) 
    // { 
    //     blocco_istruzioniN; 
    // }
    // else
    // { 
    //     blocco_istruzioni_di_default; 
    // }

    // Equivalent expressions
    // (1)
    if ((x == 1) || (x == 2))
        printf("x uguale a 1 o a 2\n");
    else
        printf("x diverso da 1 e da 2\n");

    // (2)
    if (x == 1)
        printf("x uguale a 1 o a 2\n");
    else if (x == 2)
        printf("x uguale a 1 o a 2\n");
    else
        printf("x diverso da 1 e da 2\n");

    // <espressione> ? <azione_true> : <azione_false>;

    // while (<condizione>) {
    //     <istruzione>;
    // }

    // do {
    //     <istruzioni>;
    // } while (<condizione>);

    // for (<istruzione1>; <condizione>;<istruzione2>)
    //     <istruzione>;
        
    // for (<istruzione1>; <condizione>;<istruzione2>)
    // {
    //     <istruzione1>;
    //     <istruzione2>;
    //     ...
    // }



}