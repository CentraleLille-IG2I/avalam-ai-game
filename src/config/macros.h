#ifndef MACROS_H
#define MACROS_H

// applique les cases vides par défaut sur la grille a
#define APPLY_DEFAULT_EMPTY(a)\
a[4][4].valeur = 2;\
	a[0][0].valeur = 2;\
	a[1][0].valeur = 2;\
	a[4][0].valeur = 2;\
	a[5][0].valeur = 2;\
	a[6][0].valeur = 2;\
	a[7][0].valeur = 2;\
	a[8][0].valeur = 2;\
	a[0][1].valeur = 2;\
	a[5][1].valeur = 2;\
	a[6][1].valeur = 2;\
	a[7][1].valeur = 2;\
	a[8][1].valeur = 2;\
	a[0][2].valeur = 2;\
	a[7][2].valeur = 2;\
	a[8][2].valeur = 2;\
	a[0][3].valeur = 2;\
	a[8][5].valeur = 2;\
	a[0][6].valeur = 2;\
	a[1][6].valeur = 2;\
	a[8][6].valeur = 2;\
	a[0][7].valeur = 2;\
	a[1][7].valeur = 2;\
	a[2][7].valeur = 2;\
	a[3][7].valeur = 2;\
	a[8][7].valeur = 2;\
	a[0][8].valeur = 2;\
	a[1][8].valeur = 2;\
	a[2][8].valeur = 2;\
	a[3][8].valeur = 2;\
	a[4][8].valeur = 2;\
	a[7][8].valeur = 2;\
	a[8][8].valeur = 2;


#endif