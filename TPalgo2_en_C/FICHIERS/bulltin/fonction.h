#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED
 int code ;
 char nom[20],prenom[20];
 float noteE,noteO;
 FILE *fp ;
 void ajouterEtu(void);
 void bulletinT(void);
 void modifierETU(void);
 void supprimer(void);
void moyenneClass(void);
void listeAdm(void);
void bulletin1(void);
 void ajouterEtu()
 {int codeR , tr=0;
 fp=fopen("Bulletin.txt","a+");
 if(fp==NULL)
 {
   printf("Impossible d'ouvrir le fichier!!! ");
   exit(1);
 }
  printf("donner le code de l'etudiant a ajouter :");
  scanf("%d",&codeR);
  while(!feof(fp))
  {
      fscanf(fp,"%d\n%s\n%s\n%f\n%f\n",&code,nom,prenom,&noteE,&noteO);
      if(code==codeR)
      {
        tr=1;
        break;
      }
      else
        tr=0;
  }

  if(tr==1)
    printf("l'etudiant figure deja sur la liste !");
  else{
    printf("donner le nom :"); scanf("%s",nom);
  printf("le prenom :"); scanf("%s",prenom);

do{
    printf("donner le note ecrit :"); scanf("%f",&noteE);
}while(noteE<0||noteE>20);
do{
    printf("donner le note oral:"); scanf("%f",&noteO);
}while(noteO<0||noteO>20);
fprintf(fp,"%d\n%s\n%s\n%f\n%f\n",codeR,nom,prenom,noteE,noteO);
}
//nom :%s\nprenom :%s\ncode :%d\nnoteE :%.2f\nnote :%.2f\n//
fclose(fp);
 }
void bulletinT()
{
 fp=fopen("Bulletin.txt","r");
 if(fp==NULL)
 {
   printf("Impossible d'ouvrir le fichier!!! ");
   exit(1);
 }
 rewind(fp);
 while(!feof(fp))
 {  fscanf(fp,"%d\n%s\n%s\n%f\n%f\n",&code,nom,prenom,&noteE,&noteO);

   printf("nom :%s\nprenom :%s\ncode Etudiant : P32 %d\nnoteE :%.2f\nnoteO :%.2f\n",nom,prenom,code,noteE,noteO);
   printf("=================================================\n");
 }
 fclose(fp);
}

void bulletin1()
{ int codeA,tr=0;
    fp=fopen("Bulletin.txt","r");
 if(fp==NULL)
 {
   printf("Impossible d'ouvrir le fichier!!! ");
   exit(1);
 }
 rewind(fp);
 printf("donner le code l'etudiant a afficher :");
 scanf("%d",&codeA);
 while(!feof(fp))
 {
     fscanf(fp,"%d\n%s\n%s\n%f\n%f\n",&code,nom,prenom,&noteE,&noteO);
     if(codeA==code){
     tr=1;
     break;
 }
}
 if(tr==1){
     printf("nom :%s\nprenom :%s\ncode Etudiant : P32 %d\nnoteE :%.2f\nnoteO :%.2f\n",nom,prenom,code,noteE,noteO);
     printf("la moyenne est :%.2f",(noteE+noteO)/2);
         }
     else
        printf("\nDesole l'etudiant ne figure pas dans notre liste !!\n");
        fclose(fp);
        }
void moyenneClass()
{ int i;float n,moy;float m=0;
    fp=fopen("Bulletin.txt","r");
 if(fp==NULL)
 {
   printf("Impossible d'ouvrir le fichier!!! ");
   exit(1);
 }
 while(!feof(fp))
 {
      fscanf(fp,"%d\n%s\n%s\n%f\n%f\n",&code,nom,prenom,&noteE,&noteO);
      n=(noteE+noteO)/2;
      m=m+n;
      i++;
 }
 if(i!=0){
 moy=m/i;
 printf("la moyenne de la classe est : %f",moy);
 }
 else
  printf("le dossier de la classe est vide !! \n aucun etudiant n'a ete enregister!!\n");
 fclose(fp);
}
void listeAdm()
{ float n; int admi=0;
    fp=fopen("Bulletin.txt","r");
 if(fp==NULL)
 {
   printf("Impossible d'ouvrir le fichier!!! ");
   exit(1);
 }
 printf("********La liste des Admis ******** \n");
    while(!feof(fp))
 {
      fscanf(fp,"%d\n%s\n%s\n%f\n%f\n",&code,nom,prenom,&noteE,&noteO);
      n=(noteE+noteO)/2;
      if(n>=10)
      { admi++;
          printf("nom :%s\nprenom :%s\ncode Etudiant : P32 %d\nnoteE :%.2f\nnoteO :%.2f\n",nom,prenom,code,noteE,noteO);
     printf("la moyenne est :%.2f",(noteE+noteO)/2);
     printf("\n======================================\n");
      }
}
  printf("le nombre d'etudiant admi est de %d etudiants",admi);
  fclose(fp);
}
void modifierETU()
{FILE *tmp;
    int codeR,tr=0;
    fp=fopen("Bulletin.txt","r");
 if(fp==NULL)
 {
   printf("Impossible d'ouvrir le fichier!!! ");
   exit(1);
 }
 tmp=fopen("temp.txt","w");
 if(tmp==NULL)
 {
   printf("Impossible d'ouvrir le fichier!!! ");
   exit(1);
 }
 printf("donner le code de l'etudiant a modifier :");
 scanf("%d",&codeR);
    while(!feof(fp))
 {
  fscanf(fp,"%d\n%s\n%s\n%f\n%f\n",&code,nom,prenom,&noteE,&noteO);
  if(codeR==code)
  {tr=1;
       printf("donner le nom de l'etudiant a modifier : ");
  scanf("%s",nom);
  }
  fprintf(tmp,"%d\n%s\n%s\n%f\n%f\n",code,nom,prenom,noteE,noteO);
 }
 if(tr==0)
 printf("l'etudiant a modifier n'exite pas dans notre liste !");
 else
    printf("le nom de l'etudiant a ete modifier !");
 fclose(fp);fclose(tmp);
 remove("Bulletin.txt");
 rename("temp.txt","Bulletin.txt");
}
void supprimer()
{
    {FILE *tmp;
    int codeR,tr=0;
    fp=fopen("Bulletin.txt","r");
 if(fp==NULL)
 {
   printf("Impossible d'ouvrir le fichier!!! ");
   exit(1);
 }
 tmp=fopen("temp.txt","w");
 if(tmp==NULL)
 {
   printf("Impossible d'ouvrir le fichier!!! ");
   exit(1);
 }
 printf("donner le code de l'etudiant a supprimer :");
 scanf("%d",&codeR);
    while(!feof(fp))
 {
  fscanf(fp,"%d\n%s\n%s\n%f\n%f\n",&code,nom,prenom,&noteE,&noteO);
  if(codeR==code)
  {tr=1;
  continue;
  }
  fprintf(tmp,"%d\n%s\n%s\n%f\n%f\n",code,nom,prenom,noteE,noteO);
 }
 if(tr==1)
    printf("l'etudint a ete supprimer !!");
 else
    printf("l'etudiant ne figure dans la liste !!");
 fclose(fp);fclose(tmp);
 remove("Bulletin.txt");
 rename("temp.txt","Bulletin.txt");
}
}
#endif
