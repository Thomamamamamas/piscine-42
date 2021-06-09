/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:57:36 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/06 14:17:13 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	if (str[0] == '\0')
	{
		return (0);
	}
	while (str[n])
	{
		if (!(str[n] >= 48 && str[n] <= 57))
		{
			return (0);
		}
		n++;
	}
	return (1);
}
