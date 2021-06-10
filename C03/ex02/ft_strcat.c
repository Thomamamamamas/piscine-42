/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 13:25:56 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/10 10:52:10 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	n;
	int	m;

	n = 0;
	m = 0;
	while (dest[n])
	{
		n++;
	}
	while (src[m])
	{
		if (src[m] != '\0')
		{
			dest[n] = src[m];
			n++;
		}
		m++;
	}
	return (dest);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	main()
{
	char	dest1[10] = "lol";
	char	src1[5] = "mdr";
	char	dest2[10] = "lol";
	char	src2[5] = "mdr";
	strcat(dest1, src1);
	ft_strcat(dest2, src2);
	printf("%s\n", dest1);
	printf("%s\n", dest2);
	return (0);
}
*/
