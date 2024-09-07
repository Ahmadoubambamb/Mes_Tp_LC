#include <stdio.h>
#include <stdlib.h>
#include "Listes.h"


void main()
{
	Liste *liste1, *liste2, *conc;
    liste1 = saisieOrdre();
    affichage(liste1);
    liste2 = saisieOrdre();
    affichage(liste2);
    int e;
    printf("Quel element recherchez vous?");
    scanf("%d", &e);
    if(recherche(liste1, e) == NULL)
    	printf("Non trouve");
    else
    	printf("L'element %d est present!\n", e);

    conc = concataner(liste1, liste2);
    affichage(conc);
    conc = suppression(conc, e);
    printf("\n---------affichage apres suppression de %d------\n", e);
    affichage(conc);
    conc = suppressionTous(conc, e);
    printf("\n---------affichage apres suppression de tous les %d------\n", e);
    affichage(conc);
    Liste *Rec, *RecInv;
    Rec = Recopie(conc);
    printf("\n---------affichage apres la recopie------------\n");
    affichage(Rec);
    RecInv = RecopieInv(conc);
    printf("\n---------affichage apres la recopie de l'inverse------------\n");
    affichage(RecInv);
/*
Liste* suppression(Liste*, int);
Liste* suppressionTous(Liste*, int);
Liste* Recopie(Liste*);
Liste* RecopieInv(Liste*);*/

}
