#ifndef ENSEIGNER_H_INCLUDED
#define ENSEIGNER_H_INCLUDED
typedef struct
{ char nom[30] , prenom[30] , diplome[30];
  char **matiere;
  int nbDeMat;
}Enseignant;

Enseignant *CreationE(char* , char* , char*);

void Destruction(Enseignant*);

void affiche(Enseignant*);

char *Recup_diplom(Enseignant*);

char *Ruc_imatiere(Enseignant* , int);

int ajouter(Enseignant *,char *);

Enseignant *copie(Enseignant*);

int Recherche(Enseignant*,char*);

void saisie(char*,char*,char*);

#endif // ENSEIGNER_H_INCLUDED
