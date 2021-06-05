/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 12:07:34 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/05 12:30:43 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_definechar(int i, int j, int x, int y)
{
	if (i == 0 || i == y - 1)
	{
		if (j == 0 || j == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (j == 0 || j == x - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}

void	rush00(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	if (x <= 0)
		return ;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			ft_definechar(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
