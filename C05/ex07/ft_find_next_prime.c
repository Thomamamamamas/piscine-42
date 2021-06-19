/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 17:53:20 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/18 10:21:35 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	while (i * i <= (unsigned int)nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
	{
		if (nb % 2 != 0)
			nb = nb + 2;
		else
			nb = nb + 1;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 0;
	printf("%d\n", ft_find_next_prime(nb));
	return (0);
}
*/
