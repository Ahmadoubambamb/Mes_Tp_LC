#ifndef ENTREPRISE_H_INCLUDED
#define ENTREPRISE_H_INCLUDED
typedef struct emp
{ char nom[30],prenom[255],sexe,metier[255];
  int An_exp,salaire;
}Membre_Personnels;

typedef Membre_Personnels Entreprise[100];
void saisie_TMembres(Entreprise  ,int );
void Affiche_membres(Entreprise , int );
void Affiche_membre_salaire_sup(Entreprise, int );
void Affiche_info_femmeS(Entreprise , int);
void Affiche_info_Ing(Entreprise , int);
void Calcul(Entreprise, int );
void Affiche_femme_ing(Entreprise , int);
#endif // ENTREPRISE_H_INCLUDED


