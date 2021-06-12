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

void	*init_side(size)
{
	int	*mat;
	mat = (int*)malloc(sizeof(int) * size * size);
	mat[0] = 4;
	mat[1] = 1;
	mat[2] = 1;
	mat[3] = 1;
	mat[4] = 1;
	mat[5] = 1;
	mat[6] = 1;
	mat[7] = 1;
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

//Simplifie quand pos est egal a 0
void	simplification_haut(int *tab, int size, int *side, int i)
{
	int	start_pos;
	int	end_pos;
	int	n;

	n = 0;
	start_pos = get_start_pos(size, i);
	end_pos = get_end_pos(size, start_pos, i);
	while (start_pos < end_pos)
	{
		if ((side[i] == 4 && side[i+4] == 1) && tab[start_pos] == 0)
			tab[start_pos] = n;
		n++;
		start_pos++;
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
		if (side[i] == 1 || side[i] == 4)
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
	return (0);
}
