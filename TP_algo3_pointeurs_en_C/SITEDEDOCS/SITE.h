#ifndef SITE_H_INCLUDED
#define SITE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Document.h"
typedef struct
{DOCUMENT *doc;
    int nbre_doc;
}Site;
Site *creation_Svide(void);
void destruction(Site*);
int insertion(Site*,DOCUMENT);
int supression(Site*,DOCUMENT);
int recherche(Site , DOCUMENT);
Site *Unionsite(Site , Site);
 Site *Intersection(Site , Site);
Site *Difference(Site , Site);
void affiche(Site);
#endif // SITE_H_INCLUDED
