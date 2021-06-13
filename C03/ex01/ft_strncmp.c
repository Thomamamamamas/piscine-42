/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 12:02:19 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/13 17:17:29 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	m;
	int				res;

	m = 0;
	while (m < n && *s1 == *s2)
	{
		m++;
	}
	if (*s1 != *s2)
	{
		return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (0);
}
/*
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
*/
