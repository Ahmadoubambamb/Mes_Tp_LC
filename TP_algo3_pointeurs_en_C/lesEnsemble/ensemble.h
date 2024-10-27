#ifndef ENSEMBLE_H_INCLUDED
#define ENSEMBLE_H_INCLUDED
typedef struct
{int card , N;
  int *element;
}Ens;

Ens *Cree_ens(int );

void destruct(Ens*);

int ajouter(Ens * ,int);

int test(Ens *,int);

Ens *Union(Ens , Ens ,int);

Ens *Intersection(Ens , Ens ,int);

#endif // ENSEMBLE_H_INCLUDED
