#include <stdio.h>
#include <stdlib.h>
#include "lc.h"


void affiche(liste L)	//Affiche les elements de la liste en mode python
{
	printf("[");
	if(L != NULL)
	{
		liste l = L;
		printf("%d", l->val);
		l = l->svt;
		while(l != NULL)
		{
			printf(", %d", l->val);
			l = l->svt;
		}
	}
	printf("]\n");
}

liste create(int val)	//Alloue un element avec comme valeur val et son suivant à NULL
{
	liste l = (liste) malloc(sizeof(element));
	l->val = val;
	l->svt = NULL;
	return l;
}

void add_val(liste L, int val)	//Va en bout de liste puis creer un element qui contient val et l'ajoute à la liste
{
	if(L == NULL)
		exit(EXIT_FAILURE);
	liste l = L;
	while(l->svt != NULL)
	{
		l = l->svt;
	}
	element* tmp = (element*) malloc(sizeof(element));
	if(tmp == NULL)
		return;
	tmp->val = val;
	tmp->svt = NULL;
	l->svt = tmp;


}

void add_el(liste L, element* el) // ajoute un element en fin de liste
{
	if(L == NULL)
		exit(EXIT_FAILURE);
	liste l = L;
	while(l->svt != NULL)
		l = l->svt;
	l->svt = el;
}

void add_head(liste* L, element* el) // Ajoute un element en tête et ajuste la tête de la liste (attention à transmettre l'adresse de la liste)
{
	if(L == NULL)
		exit(EXIT_FAILURE);
	el->svt = *L;
	*L = el;
}

element* get_head(liste* L) //Donne la valeur en tête et l'eneleve de la liste
{
	if(L == NULL)
		exit(EXIT_FAILURE);
	element* res = *L;
	*L = (*L)->svt;
	res->svt = NULL;
	return res;
}

element* get_last(liste L) // Pop le dernier element de la liste et le retourne
{
	if(L == NULL)
		exit(EXIT_FAILURE);
	liste l = L;
	while(l->svt->svt != NULL)
		l = l->svt;
	element* res= l->svt;
	l->svt = NULL;
	return res;
	
}

int nb_el(liste L) // renvoie le nombre d'elements de la liste L
{
	if(L == NULL)
		return 0;
	return 1 + nb_el(L->svt);
}

void add_idx(liste L,element* el, uint idx) // ajoute un element à l'indice idx décalant les suivants de 1
{
	int i;
	liste l = L;
	for(i = 0; i < idx-1; i++)
		l = l->svt;
	el->svt = l->svt;
	l->svt = el;
	
}

void rplc_idx(liste L,int valeur, uint idx) // remplace la valeur de l'élement à l'indice idx
{
	int i;
	liste l = L;
	for(i = 0; i < idx; i++)
		l = l->svt;
	l->val = valeur;
	
}

