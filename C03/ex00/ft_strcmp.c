/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 10:34:06 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/11 17:15:23 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main()
{
	char	str1[] = "test";
	char	str2[] = "";
	char	s1[] = "test";
	char	s2[] = "";
	int	n = strcmp (str1, str2);
	int	m = ft_strcmp(s1, s2);
	printf("%d\n", n);
	printf("%d\n", m);
}
*/
