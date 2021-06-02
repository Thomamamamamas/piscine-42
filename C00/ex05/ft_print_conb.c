/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_conb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:45:01 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/02 13:06:09 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_print_comb(void);
void	write_numbers(char x, char y, char z);

void	ft_print_comb(void)
{
	char	x ;
	char	y ;
	char	z ;

	x = '0';
	while (x <= '9')
	{
		y = x + 1;
		while (y <= '9')
		{
			z = y + 1;
			while (z <= '9')
			{
				write_numbers(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}

void	write_numbers(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (!(x == '7' && y == '8' && z == '9'))
	{
		write(1, ", ", 2);
	}
}
