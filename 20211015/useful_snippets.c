/* Some useful snippets of code */
#include <stdio.h>

/* Definizione di una funzione 
con parametri di input e output 
<tipo0> nomeFunzione1( <tipo1> parametro1, ...)
{
    // Corpo della funzione

    return <espressione>; // <tipo0>
}
*/

/* Definizione di una funzione 
priva di parametri di input e output */
void nomeFunzione2()
{
    /* Corpo della funzione */
    
    return; // Opzionale
}

/* Funzione che calcola la media 
di due valori*/
float getMean(float val1, float val2)
{
    float mean = (val1 + val2) / 2;
    return mean;
}

/* Funzione che stampa una stringa
seguita da un valore */
void printResult(int a)
{
    printf("Il risultato è %d\n", a);
}

int main()
{
    /* Definizione di una variabile
        <tipo> nome_variabile;
    */

    // Esempi:
    int num;
    float limit;
    char c;

    int altezza = 5, lunghezza = 10, larghezza = 2;
    printf("L'altezza e' %d \n", altezza);
    printf("Il volume e' %d \n", altezza * lunghezza * larghezza);

    float pi_greco = 3.1415;
    printf("%f \n", pi_greco);
    printf("Valore = %f \n", 0.5);

    printf("Inserire un valore seguito dal tasto Enter\n");
    int val1;
    scanf("%d", &val1);

    return 0;
}