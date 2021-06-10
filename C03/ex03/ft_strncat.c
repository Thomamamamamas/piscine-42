/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 13:39:30 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/10 10:52:39 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;
	unsigned int	m;

	n = 0;
	m = 0;
	while (dest[n])
		n++;
	while (m < nb)
	{
		if (src[m])
		{
			if (src[m] != '\0')
			{
				dest[n] = src[m];
				n++;
			}
		}
		m++;
	}
	dest[n] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char	src2[] = "test";
	char dest2[] = " pute";
	ft_strncat(dest2, src2, 5);
   printf("%s\n", dest2);
}
*/
