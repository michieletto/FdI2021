#include <math.h>
#include "point.h"

/* Definizione della funzione getEuclideanDistance() dichiarata
   nell'header points.h */
double getEuclideanDistance(struct point p1, struct point p2)
{
  /* Dichiarazione della variabile dist di tipo double e 
     assegnazione del suo valore iniziale attraverso la chiamata
     alla funzione sqrt(), dichiarata in math.h. Viene chiamata 
     anche la macro square(), che viene sostituita in fase di 
     preprocessing con le istruzioni definite in points.h */
  double dist = sqrt(SQUARE(p1.x - p2.x) + SQUARE(p1.y - p2.y));

  return dist;
}
