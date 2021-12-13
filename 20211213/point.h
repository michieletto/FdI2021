#define SQUARE(a) ((a)*(a)) 

/* Struttura che definisce un punto nel piano, 
   definito dalle coordinate x e y */  
struct point 
{
  double x;
  double y;
};

/* Dichiarazione della funzione getEuclideanDistance() che 
   calcola e restituisce la distanza euclidea nel piano tra 
   2 punti (di tipo struct point) passati come parametro */
double getEuclideanDistance(struct point p1, struct point p2);
