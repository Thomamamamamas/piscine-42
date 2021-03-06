/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 14:34:16 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/10 11:59:10 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	n;

	n = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[n])
	{
		if (!(str[n] >= 'A' && str[n] <= 'Z'))
		{
			return (0);
		}
		n++;
	}
	return (1);
}
