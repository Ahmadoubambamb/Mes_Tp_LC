#ifndef STATISTIQUE_H_INCLUDED
#define STATISTIQUE_H_INCLUDED
#define N 26
typedef struct{
    char lettre;
    int occ;
}STAT;
typedef STAT Tab_struct[N];
void tableau_stat(Tab_struct T,int *j,char phrase[]);
int anagramme_tab(char phrase1[],char phrase2[]);
STAT *pointeur_stat(char phrase[],int *j);
int anagramme_pointeur(char phrase1[],char phrase2[]);
void liberer_espace(STAT *p);
void transfo_en_minus(char minus[],char majus[]);
#endif // FICHIER_H_INCLUDED
