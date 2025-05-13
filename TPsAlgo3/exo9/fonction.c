#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fonction.h"

double surf_rect (double a, double b)
{ return a*b;
}
double surf_tria(double a, double b) { return a*b/2;}
double surf_disq (double a, double b) {return 3.14*a*a;}
