/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 13:32:47 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/03 13:35:44 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_print_comb2(void);
void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putnbr(a);
			write(1, " ", 1);
			ft_putnbr(b);
			if (a < 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putchar(nb / 10 + '0');
		ft_putchar(nb % 10 + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
