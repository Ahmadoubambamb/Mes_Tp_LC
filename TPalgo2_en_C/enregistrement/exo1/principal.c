#include <stdio.h>
#include <string.h>
 typedef struct EMPL
    {
        char nom[20];
        short int matricule;
        short int jnaiss;
        short int mnaiss;
        short int anaiss;
        char fonction[20];
        long int salaire;
    }EMP;

void saisie(EMP *t, int p)
{
    int i;
    for(i = 0; i<p; i++)
        {
        printf("nom : ");
        scanf("%s", t[i].nom);
        printf("matricule: ");
        scanf("%d", &t[i].matricule);
        printf("Votre fonction: ");
        scanf("%s",t[i].fonction);
        printf("Salaire: ");
        scanf("%d", &t[i].salaire);
         printf("jour de naissance: ");
        scanf("%d", &t[i].jnaiss);
         printf("mois de naissance: ");
        scanf("%d", &t[i].mnaiss);
         printf("annee de naissance: ");
        scanf("%d", &t[i].anaiss);
}
}

void affiche(EMP *t, int p)
{ int i ;
    for(i=0; i<p; i++)
    {
        printf("nom : %s\n",t[i].nom);
        printf("date de naissance: %d/%d/%d\n",t[i].jnaiss,t[i].mnaiss,t[i].anaiss);
        printf("matricule : %d\n",t[i].matricule);
        printf("fonction : %s\n",t[i].fonction);
        printf("salaire : %d\n",t[i].salaire);
    }
}
int NomEmpl(char Nom[], EMP t[], int p)
{
    int i;
    for (i=0; i<p; i++)
    {
        if(strcmp(t[i].nom, Nom) == 0)
            return 1;
    }
    return 0;
}
int MassSalaire(EMP t[],int p)
{
    int i,mass;
      mass=0;
    for (i=0; i<p; i++)
    {
        mass = mass + t[i].salaire;
    }
    return mass;
}

void directeur(EMP t[], int p)
{
    int i,j=0,max=t[0].salaire;
    for (i=1; i<p; i++)
    {
        if(t[i].salaire > max){
            max = t[i].salaire;
        j=i ;}
    }

    printf("\n----------- LES DONNEES du DIRECTEURS SONT -------------\n");
        printf("nom : %s\n",t[j].nom);
        printf("date de naissance: %d/%d/%d\n",t[j].jnaiss,t[j].mnaiss,t[j].anaiss);
        printf("matricule : %d\n",t[j].matricule);
        printf("fonction : %s\n",t[j].fonction);
        printf("salaire : %d\n",t[j].salaire);
}

int main()
{
    int p;
    EMP t[20];
    printf("Donnez la taille du tableau: ");
    scanf("%d", &p);
    saisie(t,p);
     printf("\n-------TABLEAU RESULTAT---------\n");
    affiche(t,p);

    int res;
    char test[20];
    printf("Donnez le nom recherche : ");
    scanf("%s", test);
    res = NomEmpl(test,t,p);
    if(res ==1)
        printf("%s est un employer de l'entreprise \n",test);
    else
        printf("%s N'est pas un employer de l'entreprise",test);

        res = MassSalaire(t,p);
        printf("\n La masse salariale est %d", res);
        directeur(t,p);
        return 0;

}


