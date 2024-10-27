#ifndef ETUDIANT_H_INCLUDED
#define ETUDIANT_H_INCLUDED
typedef struct
{ int jour ,mois ,annee ;
}DATE;

typedef struct
{char nom[30],prenom[30];
    DATE  date;
  int numero ;
}etudiant;

 typedef struct
 { int nbre_Etd;
     etudiant *Etdts ;
 }Classe;

 void saisie(char*,char*,int,DATE);
 Classe *class_vide(void);

etudiant* Creation_Etud(char *,char*,DATE,int);

int rajouter(Classe*,etudiant);

etudiant *recherche(Classe* , int);


#endif // ETUDIANT_H_INCLUDED

