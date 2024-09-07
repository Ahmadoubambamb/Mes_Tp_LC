#ifndef SENTENCE_H_INCLUDED
#define SENTENCE_H_INCLUDED
typedef struct
{ char **p;
   int n;
}tab;
tab *creationP();
int ajoutP(tab* , char*);
void affiche(tab *);
void liberer(tab *);
void trier(tab*);
#endif //SENTENCE_H_INCLUDED

