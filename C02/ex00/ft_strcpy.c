/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:20:19 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/10 10:45:33 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = 0;
	while (src[n])
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main()
{
	char	src1[] = "test";
	char	dst1[] = "toto";
	char	src2[] = "test";
	char	dst2[] = "toto";
	strcpy(dst1, src1);
	ft_strcpy(dst2, src2);
	printf("%s\n", dst1);
	printf("%s\n", dst2);
	return (0);
}
*/
