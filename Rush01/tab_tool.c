/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_tool.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:43:40 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/13 17:05:56 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*init_zero_mat(int size)
{
	int	*mat;
	int	i;

	i = 0;
	mat = (int *)malloc(sizeof (int ) * size * size);
	while (i < size * size)
	{
		mat[i] = 0;
		i++;
	}
	return (mat);
}

//donne la position de l'argument 0:haut 1:bas 2:gauche 3:droite
int	get_pos(int size, int i)
{
	return (i / size);
}

//donne la coordonees de fin de la colonne a parcourir
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

/*
int	*init_side(int size)
{
	int	*mat;

	mat = (int*)malloc(sizeof (int) * size * size);
	mat[0] = 4;
	mat[1] = 3;
	mat[2] = 2;
	mat[3] = 1;
	mat[4] = 1;
	mat[5] = 2;
	mat[6] = 2;
	mat[7] = 2;
	mat[8] = 4;
	mat[9] = 3;
	mat[10] = 2;
	mat[11] = 1;
	mat[12] = 1;
	mat[13] = 2;
	mat[14] = 2;
	mat[15] = 2;
	return (mat);
}
*/
