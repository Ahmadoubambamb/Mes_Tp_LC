#ifndef ENTREPRISE_H_INCLUDED
#define ENTREPRISE_H_NCLUDED

typedef struct
{char nom[30] ,prenom[30] , metier[20], sexe ;
  int AE , salaire;

}Membres_perso;
typedef struct
{ Membres_perso *M;
  int N;
}Entreprise;
void saisi(char*,char*,char,char*,int,int);
void saisieM(Entreprise * ,int);
void affichage(Entreprise, int);
void affiche_sup(Entreprise ,int);

#endif //ENTRERISE_H_INCLUDED
