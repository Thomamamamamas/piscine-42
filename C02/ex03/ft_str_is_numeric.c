/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:57:36 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/10 12:00:03 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[n])
	{
		if (!(str[n] >= '0' && str[n] <= '9'))
		{
			return (0);
		}
		n++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main()
{
	char	str[] = "42";
	int		n = ft_str_is_numeric(str);
	printf("%d\n", n);
	return (0);
}
*/
