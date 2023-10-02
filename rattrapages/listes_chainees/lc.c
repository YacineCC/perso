#include <stdio.h>
#include <stdlib.h>


typedef struct element element;

struct element
{
	int val; // valeur entière de l'élement de la liste chaînée
	element* svt;// pointeur sur le prochain élement de la liste chaînée
};// élement d'une liste chaînée, pointeur sur un élement et début dela liste chaînée en court "lc"
typedef element* liste;

void affiche(liste L)
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
		printf("]\n");
	}
}
liste create(int val)
{
	liste l = (liste) malloc(sizeof(element));
	l->val = val;
	l->svt = NULL;
	return l;
}

void add_val(liste L, int val)
{
	if(L == NULL)
		return;
	liste l = L;
	while(l->svt != NULL)
	{
		l = l->svt;
	}
	element* tmp = (element*) malloc(sizeof(element));
	tmp->val = val;
	tmp->svt = NULL;
	l->svt = tmp;


}

//void add(lc)




int main()
{
	liste L = create(0);

	for(int i = 1; i < 30; i++)
	{
		add_val(L,i);
		affiche(L);
	}
	return 0;
}
