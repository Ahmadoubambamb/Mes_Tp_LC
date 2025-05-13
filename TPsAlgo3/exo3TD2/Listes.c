#include <stdio.h>
#include <stdlib.h>
#include "Listes.h"

Liste* creationMaillon(int e)
{
	Liste *m;
	m = (Liste*)malloc(sizeof(Liste));
	m->cont = e;
	m->suiv = NULL;

	return(m);
}

Liste* saisieTrie()
{
	Liste *l, *q, *c;
	l = (Liste*)malloc(sizeof(Liste));

	l =NULL;
	int x;
	printf("NB:0 pour arreter !! \n");
	do{

         printf("donner un Element :");
         scanf("%d",&x);
         if(x>0)
         {
         Liste *nouv = creationMaillon(x);
         if(l == NULL)
         	l = nouv;
         else{

         	  if(x < l->cont)
         	  {
         	  	nouv->suiv = l;
         	  	l = nouv;
         	  }else{
         	  	q = l;
         	  	while((q != NULL) && (q->cont < x))
         	  	{
         	  		c = q;
         	  		q = q->suiv;
         	  	}
         	  	if(q == NULL)
         	  		c->suiv = nouv;
         	  	else
         	  	{
         	  		nouv->suiv = q;
         	  		c->suiv = nouv;
         	  	}
         	  }
         }

	     }

        }while(x>0);

    return(l);
}

Liste* saisieOrdre()
{
	Liste *l, *q;
	l = (Liste*)malloc(sizeof(Liste));

	l = NULL;
	int x;
	printf("NB: 0 pour s'arreter!!\n");
	do{

		printf("donner un Element:");
		scanf("%d", &x);
		if(x>0)
		{
		  Liste *nouv;
		  nouv  = (Liste*)malloc(sizeof(Liste));

		  nouv = creationMaillon(x);

		  if(l==NULL)
		  	l = nouv;
		  else{
		  	    q=l;
		  	    while(q->suiv != 0)
		  	    	q = q->suiv;

		  	    q->suiv = nouv;
		  }
		}

	}while(x>0);

	    return(l);

}
void affichage(Liste *l)
{
	Liste *q = l;
	while(q != NULL)
	{
		printf("%d-> ", q->cont);
		q = q->suiv;
	}
	printf("\n");

}
Liste* recherche(Liste *l, int e)
{
	Liste *q;
	if(l==NULL)
		return NULL;
	q=l;
	while(q != NULL)
    {
    	if(q->cont == e)
    		return(q);
    	else
    		q=q->suiv;
    }
    return(NULL);
}
Liste* concataner(Liste *l1, Liste *l2)
{
	if(l1 == NULL)
		return NULL;
	if(l2 == NULL)
		return NULL;
	if((l1 == NULL) && (l2 == NULL))
		return NULL;
	Liste *q =l1;
	while(q->suiv != NULL)
		q = q->suiv;

	q->suiv = l2;
	return (l1);
}
Liste* suppression(Liste *l, int e)
{
	if(l == NULL)
		return NULL;

	if(l->cont == e)
		return(l->suiv);
    Liste *cour, *succ;
    cour = l;
    succ = l->suiv;
	while(succ != NULL)
	{
		if(succ->cont != e)
		{
			cour = succ;
			succ = succ->suiv;
		}else
		{
			cour->suiv = succ->suiv;
			free(succ);
			return l;
		}

	}
	return l;
}
Liste* suppressionTous(Liste *l, int e)
{
	if(l == NULL)
		return NULL;
	while((l != NULL) && (l->cont == e))
		l = l->suiv;

	Liste *q = l;
	while((q->suiv != NULL))
	{
		if(q->suiv->cont == e)
			q->suiv = q->suiv->suiv;
		else
			 q = q->suiv;
	}
	return(l);
}
Liste* Recopie(Liste *l)
{
	Liste *Rec, *nouv, *q, *p;
	//Rec = (Liste*)malloc(sizeof(Liste));
	Rec = NULL;

    q = l;
    while(q != NULL)
    {
    	nouv = creationMaillon(q->cont);
    	if(Rec == NULL)
    	{
    		Rec = nouv;
    		q = q->suiv;
        }
    	else{
    		 p=Rec;
    		 while(p->suiv != NULL)
    		   p = p->suiv;

    		p->suiv = nouv;
    		q = q->suiv;
    	}
     }
     return Rec;

}
Liste* RecopieInv(Liste *l)
{
	Liste *Rec, *q, *p, *nouv;
	//Rec = (Liste*)malloc(sizeof(Liste));
	Rec = NULL;
	q =l;
	Rec = creationMaillon(q->cont);
	//p=Rec;
	q = q->suiv;
	while(q != NULL)
	{
		nouv = creationMaillon(q->cont);
		nouv->suiv = Rec;
		Rec = nouv;
		q = q->suiv;
	}
    return Rec;
}
