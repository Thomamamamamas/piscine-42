/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:58:29 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/10 11:59:08 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[n])
	{
		if (!(str[n] >= 'a' && str[n] <= 'z') && \
			   	!(str[n] >= 'A' && str[n] <= 'Z'))
			return (0);
		n++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main()
{
	char	str[] = "test42";
	int	n = ft_str_is_alpha(str);
   printf("%d\n", n);
}
*/
