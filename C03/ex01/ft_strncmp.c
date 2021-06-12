/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 12:02:19 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/12 11:49:14 by tcasale          ###   ########.fr       */
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
		if ((unsigned char)s1[m] && (unsigned char)s2[m] && (unsigned char)s1[m] != (unsigned char)s2[m])
		{
			res = res + (unsigned char)s1[m] - (unsigned char)s2[m];
			return (res);
		}
		m++;
	}
	return (res);
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	main()
{
	char	s1[] = "\200";
	char	s2[] = "\0";
	int		n = 6;
	int		i = strncmp(s1, s2, n);
	int		j = ft_strncmp(s1, s2, n);
	printf("%d\n", i);
	printf("%d\n", j);
}

