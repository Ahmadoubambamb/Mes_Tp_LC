#ifndef LISTES_H_INCLUDED
#define LISTES_H_INCLUDED

typedef struct cellule{
	int cont;
	struct cellule *suiv;
}Liste;


Liste* creationMaillon(int e);
Liste* saisieTrie();
Liste* saisieOrdre();
void affichage(Liste* );
Liste* recherche(Liste *, int );
Liste* concataner(Liste*, Liste*);
Liste* suppression(Liste*, int);
Liste* suppressionTous(Liste*, int);
Liste* Recopie(Liste*);
Liste* RecopieInv(Liste*);
#endif
