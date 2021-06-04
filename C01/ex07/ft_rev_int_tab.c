/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 11:44:50 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/04 12:57:42 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int temp[size];

	n = 0;
	while (tab[n])
	{
		temp[n] = tab[-n];
		n++;
	}
	int	i;

	i = 0;
	while (temp[i])
	{
		printf("%d", temp[i]);
		tab[i] = temp[i];
	}
}

int main()
{
	int size = 4;
	int tab[size];
	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;
	ft_rev_int_tab(&tab, size);
}
