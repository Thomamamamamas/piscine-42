/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 11:44:50 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/05 16:14:50 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	temp;

	n = 0;
	while (n < size)
	{
		temp = tab[n];
		tab[n] = tab[size];
		tab[size] = temp;
		size = size - 1;
		n++;
	}
}
