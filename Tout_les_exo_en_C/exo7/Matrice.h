#ifndef MATRICE_H_INCLUCED
#define MATRICE_H_INCLUDED
typedef struct {
int nblignes;
int nbcolones;
float **m;
}matrice;

matrice *creation(int ,int);

void saisie(matrice *);

void destruct(matrice *);

void affichage(matrice *);

matrice *produit(matrice *, matrice *);

matrice *multi(matrice *, float );
//void multi(matrice *, float );
void transposer(matrice * );
#endif // MATRICE_H_INCLUDED
