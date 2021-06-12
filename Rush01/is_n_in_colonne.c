/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_n_in_colonne.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 11:58:54 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/12 15:31:22 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_n_in_colonne(int *tab, int size, int search, int col)
{
	int	start_col;
	int	end_col;

	start_col = 4 * col;
	end_col = start_col + 3;
	while (tab[start_col] && start_col <= end_col)
	{
		if (tab[start_col] == search)
			return (1);
		start_col++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

void init_tab(int *tab)
{
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 2;
	tab[5] = 3;
	tab[6] = 4;
	tab[7] = 1;
	tab[8] = 3;
	tab[9] = 4;
	tab[10] = 1;
	tab[11] = 2;
	tab[12] = 4;
	tab[13] = 1;
	tab[14] = 2;
	tab[15] = 3;
}
int	main()
{
	int	*tab = (int*)malloc(sizeof(int) * 16);
	init_tab(tab);
	int	res;
	res = is_n_in_colonne(tab, 16, 2, 1);
	printf("est dans la colonne : %d", res);
	return (0);
}
*/
