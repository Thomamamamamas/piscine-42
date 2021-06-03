/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 17:01:07 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/03 18:09:44 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putstr(char *str)
{
	int		i;
	char	word;

	i = 0;
	word = str[0];
	write(1, word, 1);
	while (word != '\0')
	{
		write(1, word, 1);
		i++;
		word = str[i];
	}
}

int		main()
{
	char	str[4];
	str = "LOL";
	ft_putstr(&str);
	return 0;
}
