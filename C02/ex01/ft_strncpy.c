/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:25:02 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/09 17:02:42 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	m;
	unsigned int	i;
	unsigned int	size;

	i = n;
	size = 0;
	m = 0;
	while (dest[size])
		size++;
	while (m < n)
	{
		if (src[m])
		{
			dest[m] = src[m];
			i++;
		}
		m++;
	}
	dest[size] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#i
c1r1p1% gcc ft_strncpy.cnclude <stdlib.h>
#include <string.h>
int	main()
{
	char	src1[] = "testtest";
	char	dst1[] = "totototo";
	char	src2[] = "testtest";
	char	dst2[] = "totototo";
	unsigned int n = 8;

	strncpy(dst1, src1, n);
	ft_strncpy(dst2, src2, n);
	printf("%s\n", dst1);
	printf("%s\n", dst2);
	return (0);
}
*/
