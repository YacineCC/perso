#ifndef LC_H
#define LC_H
typedef unsigned int uint;
typedef struct element element;

struct element
{
	int val; // valeur entière de l'élement de la liste chaînée
	element* svt;// pointeur sur le prochain élement de la liste chaînée
};// élement d'une liste chaînée, pointeur sur un élement et début dela liste chaînée en court "lc"
typedef element* liste;

//________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________

void affiche(liste);//Affiche les elements de la liste en mode python
					//
liste create(int);//Alloue un element avec comme valeur val et son suivant à NULL
				  
void add_val(liste, int);//Va en bout de liste puis creer un element qui contient val et l'ajoute à la liste

void add_el(liste, element*);// ajoute un element en fin de liste

void add_head(liste*, element*); // Ajoute un element en tête et ajuste la tête de la liste (attention à transmettre l'adresse de la liste)

element* get_head(liste*);//Donne / Pop la valeur en tête et l'eneleve de la liste (attention la tête va recevoir une affectation / va être modifié donc on donne l'adresse de la liste en paramètre

element* get_last(liste); // Pop le dernier element de la liste et le retourne

int nb_el(liste); // renvoie le nombre d'elements de la liste L

void add_idx(liste, element*, uint); // ajoute un element à l'indice idx décalant les suivants de 1

void rplc_idx(liste, int, uint);// remplace la valeur de l'élement à l'indice idx


//________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________


#endif
