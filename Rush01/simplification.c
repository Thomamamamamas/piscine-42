/*le programme commence par regarder coll1up et coll1down (voir sujet) puis si c'est une combinaison simple, (1 et 4 ou 3 et 2)
rempli les colonnes concernés ave les bons nombres. PB il peut (il y aura) des incohérences sur les lignes mais si j'ai bien
compris ton code les corriges. Je parcours pas le tableaux à l'aide des row1left et row1right car le tableau sera normalemnt
remplis a la fin du parcours de void *simplification_haut, meme si il y aura des erreurs, comme dit au dessus
le main, init_zero et init_side servent pour le debuggage.
*/

#include <stdio.h>
#include <stdlib.h>
int	*init_zero_mat(int size)
{
	int	*mat;
	int i;
	i = 0;
	mat = (int*)malloc(sizeof(int) * size * size);
	while (i < size * size)
	{
		mat[i] = 0;
		i++;
	}
	return (mat);
}

void	*init_side(int size)
{
	int	*mat;
	mat = (int*)malloc(sizeof(int) * size * size);
	mat[0] = 4;
	mat[1] = 1;
	mat[2] = 2;
	mat[3] = 3;
	mat[4] = 1;
	mat[5] = 4;
	mat[6] = 3;
	mat[7] = 2;
	mat[8] = 4;
	mat[9] = 1;
	mat[10] = 1;
	mat[11] = 1;
	mat[12] = 1;
	mat[13] = 1;
	mat[14] = 1;
	mat[15] = 1;
	return (mat);
}

//donne la position de l'argument 0:haut 1:bas 2:gauche 3:droite
int	get_pos(int size, int i)
{
	return (i / size);
}


//donne la coordonee du debut de la colonne a parcourir
int	get_start_pos(int size, int i)
{
	int	pos;
	int	start_pos;

	pos = get_pos(size, i);
	if (pos == 0)
		start_pos = i;
	else if (pos == 1)
		start_pos = i + size * (size - 1) - size;
	else if (pos == 2)
		start_pos = size * (i - 8);
	else
	{
		if (i == 12)
			start_pos = 3;
		else if (i == 13)
			start_pos = 7;
		else if (i == 14)
			start_pos = 11;
		else
			start_pos = 15;
	}
	return (start_pos);
}

//donne la coordonnees fin de la colonne a parcourir
int	get_end_pos(int size, int start_pos, int i)
{
	int	pos;
	int	end_pos;

	pos = get_pos(size, i);
	if (pos == 0)
		end_pos = start_pos + size * (size - 1);
	else if (pos == 1)
		end_pos = start_pos - size * (size - 1);
	else if (pos == 2)
		end_pos = start_pos + (size - 1);
	else
		end_pos = start_pos - (size - 1);
	return (end_pos);
}

//Si on a 2 et 3 sur le cotes
void	case_2_3(int *tab, int n, int start_pos, int situation)
{
	if (situation == 0)
	{
		if (n == 1)
			tab[start_pos] = 3;
		else if (n == 2)
			tab[start_pos] = 4;
		else if (n == 3)
			tab[start_pos] = 2;
		else
			tab[start_pos] = 1;
	}
	else if (situation == 1)
	{
		if (n <3)
			tab[start_pos] = n;
		else if (n == 3)
			tab[start_pos] = 4;
		else
			tab[start_pos] = 3;
	}
}

//Simplifie quand pos est egal a 0
void	*simplification_haut(int *tab, int size, int *side, int i)
{
	int	start_pos;
	int	end_pos;
	int	n;

	n = 1;
	start_pos = get_start_pos(size, i);
	end_pos = get_end_pos(size, start_pos, i);
	while (start_pos <= end_pos)
	{
		if (tab[start_pos] == 0)
		{
			if (side[i] == 4 && side[i+4] == 1)
				tab[start_pos] = n;
			else if (side[i] == 1 && side[i + 4] == 4)
				tab[start_pos] = size - (n - 1);
			else if (side[i] == 2 && side[i + 4] == 3)
			{
				case_2_3(tab, n, start_pos, 0);
			}
			else if (side[i] == 3 && side[i + 4] == 2)
			{
				case_2_3(tab, n, start_pos, 1);
			}
		}
		n++;
		start_pos += size;
	}
}

//demarre la simplification en checkant la place du chiffre
void	init_simplification(int *tab, int size, int *side)
{
	int	i;
	int	pos;
	int	start_pos;
	int	end_pos;

	i = 0;
	pos = 0; 
	while (side[i])
	{
		if ((side[i] == 1 && side[i + 4] == 4) || \
			(side[i] == 4 && side[i + 4] == 1) || \
			(side[i] == 3 && side[i + 4] == 2) || \
			(side[i] == 2 && side[i + 4] == 3))
		{
			if (pos == 0 || pos == 1)
				simplification_haut(tab, size, side, i);
		}
		i++;
	}
}

int	main()
{
	int	*tab = init_zero_mat(4);
	int	*side = init_side(4);
	init_simplification(tab, 4, side);

	int	n;

	n = 0;
	while (tab[n])
	{
		if (n % 4 == 0)
		{
			printf("\n");
		}
		printf("%d ", tab[n]);
		n++;
	}
	return (0);
}
