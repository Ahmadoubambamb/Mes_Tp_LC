#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED

typedef double (*fp)(double , double);
typedef struct
{ int numero ;
    fp fonc;
}tab;
double surf_rect (double , double);

double surf_tria(double , double);

double surf_disq(double ,double);

#endif //FONCTION_H_INCLUDED
