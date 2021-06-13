/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simplification.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:25:36 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/13 17:19:11 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int	*init_zero_mat(int size);
int	*init_side(int size);
int	get_pos(int size, int i);
int	get_start_pos(int size, int i);
int	get_end_pos(int size, int start_pos, int i);

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
		if (n == 1)
			tab[start_pos] = 2;
		else if (n == 2)
			tab[start_pos] = 3;
		else if (n == 3)
			tab[start_pos] = 4;
		else
			tab[start_pos] = 1;
	}
}

//Simplifie quand pos est egal a 2
void	*simplification_droite(int *tab, int size, int *side, int i)
{
	int	start_pos;
	int	end_pos;
	int	n;

	n = 1;
	start_pos = get_start_pos(size, i);
	end_pos = get_end_pos(size, start_pos, i);
	while (start_pos <= end_pos)
	{
		if (tab[start_pos] == 0 && start_pos < size * size)
		{
			if (side[i] == 4 && side[i + 4] == 1)
				tab[start_pos] = n;
			else if (side[i] == 1 && side[i + 4] == 4)
				tab[start_pos] = size - (n - 1);
			else if (side[i] == 2 && side[i + 4] == 3)
				case_2_3(tab, n, start_pos, 0);
			else if (side[i] == 3 && side[i + 4] == 2)
				case_2_3(tab, n, start_pos, 1);
		}
		n++;
		start_pos++;
	}
	return (tab);
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
		if (tab[start_pos] == 0 && start_pos < size * size)
		{
			if (side[i] == 4 && side[i + 4] == 1)
				tab[start_pos] = n;
			else if (side[i] == 1 && side[i + 4] == 4)
				tab[start_pos] = size - (n - 1);
			else if (side[i] == 2 && side[i + 4] == 3)
				case_2_3(tab, n, start_pos, 0);
			else if (side[i] == 3 && side[i + 4] == 2)
				case_2_3(tab, n, start_pos, 1);
		}
		n++;
		start_pos += size;
	}
	return (tab);
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
		pos = get_pos(size, i);
		if ((side[i] == 1 && side[i + 4] == 4) || \
			(side[i] == 4 && side[i + 4] == 1) || \
			(side[i] == 3 && side[i + 4] == 2) || \
			(side[i] == 2 && side[i + 4] == 3))
		{
			if (pos == 0)
				simplification_haut(tab, size, side, i);
			else if (pos == 2)
				simplification_droite(tab, size, side, i);
		}
		i++;
	}
}
/*
int	main(void)
{
	int	*tab = init_zero_mat(4);
	int	*side = init_side(4);
	int	n;

	n = 0;
	init_simplification(tab, 4, side);
	while (n < 4 * 4)
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
*/
