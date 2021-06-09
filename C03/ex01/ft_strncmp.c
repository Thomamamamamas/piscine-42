/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 12:02:19 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/09 15:30:43 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	m;
	int				res;

	m = 0;
	res = 0;
	while (m < n)
	{
		if (s1[m] && s2[m] && s1[m] != s2[m])
		{
			res = res + s1[m] - s2[m];
			break ;
		}
		m++;
	}
	return (res);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	main()
{
	char	s1[] = "test123";
	char	s2[] = "test145";
	int		n = 6;
	int		i = strncmp(s1, s2, n);
	int		j = ft_strncmp(s1, s2, n);
	printf("%d\n", i);
	printf("%d\n", j);
}
*/
