#include <stdio.h>




typedef struct element
{
	int val; // valeur entière de l'élement de la liste chaînée
	struct element* svt;// pointeur sur le prochain élement de la liste chaînée
}element;// élement d'une liste chaînée, pointeur sur un élement et début dela liste chaînée en court "lc"

	

//void add(lc)


int main()
{
	element test;
	test.val = 1;
	printf("%d\n",test.val);
	return 0;
}
