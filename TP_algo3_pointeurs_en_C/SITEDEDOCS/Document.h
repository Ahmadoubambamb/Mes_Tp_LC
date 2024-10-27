#ifndef DOCUMENT_H_INCLUDED
#define DOCUMENT_H_INCLUDED
typedef struct
{   int cle;
    char valeur[128];
    char **list_mot_cles;
    int nbre_motsC;
}DOCUMENT;
DOCUMENT *creation_docs(int , char* , char** ,int );
void ajout(DOCUMENT*,char*);
void saisie(int ,char * ,char ** ,int);
void afficheDocs(DOCUMENT);
#endif // DOCUMENT_H_INCLUDED
