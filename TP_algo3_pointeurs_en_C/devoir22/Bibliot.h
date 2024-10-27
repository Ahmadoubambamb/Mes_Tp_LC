#ifndef BIBLIOT_H_INCLUDED
#define BIBLIOT_H_INCLUDED
typedef struct
{
    char id[20],titre[30],autre[20],disc[20];

}livre;
typedef struct
{char nom[20],nomUni[40];
    livre *liv;
     int N;
}biblio;
biblio *Creation_BU(char *,char *);
void Destruc_BU(biblio*);
int Rajouter(biblio*,livre);
int recherche(biblio,livre);

#endif // BIBLIOT_H_INCLUDED
