#include "lc.h"
#include <stdio.h>

int main()
{
	liste L = create(0);
	for(int i = 1; i < 10; i++)
	{
		add_val(L,i);
		affiche(L);
	}
	printf("%d élements dans la liste.\n", nb_el(L));
	add_el(L, create(212));
	affiche(L);
	printf("%d élements dans la liste.\n", nb_el(L));
	add_head(&L,create(343));
	affiche(L);
	printf("%d élements dans la liste.\n", nb_el(L));
	affiche(get_last(L));
	affiche(L);
	printf("%d élements dans la liste.\n", nb_el(L));
	affiche(get_head(&L));
	affiche(L);
	printf("%d élements dans la liste.\n", nb_el(L));
	add_idx(L, create(809), 2);
	affiche(L);
	printf("%d élements dans la liste.\n", nb_el(L));
	rplc_idx(L,400,9);
	affiche(L);
	printf("%d élements dans la liste.\n", nb_el(L));

	return 0;
}

