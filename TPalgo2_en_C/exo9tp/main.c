#include <stdio.h>
#include <time.h>

void guess_number(int sl){
    srand(time(NULL));
    int H = rand()%1000 + 1;
    int i=1;
    printf("Ousmane Niass \n vous allez deviner une valeur entre 0 et 1000 top c'est partie \n=============================\n tu as 10 possibilite \n");
    do
    { printf(" donner une valeur : ");
    scanf("%d", &sl);

        if(sl>H)
            printf("Trop grand \n");
          if(sl<H)
            printf("Trop petit \n");
        if(sl==H)
            printf("bravo tu as trouver felicitation !\n");

            i++;

    }while(sl!=H && i<=10);
    if(i>10)
        printf("tu as perdu Le nbre recherche est %d", H);
}
int main()
{ int s ;

    guess_number(s);
    return 0;
}
