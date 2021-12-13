#include <stdio.h>
#include "point.h"

int main()
{
   struct point point1, point2;


   point1.x = 0.0;
   point1.y = 0.0;
   
   point2.x = 3.0;
   point2.y = 2.0;

   double dist = getEuclideanDistance(point1, point2);

   printf("La distanza tra point1=(%f,%f) e point2=(%f,%f) e' %f\n",
      point1.x,point1.y, point2.x, point2.y, dist);

   return 0;
}
