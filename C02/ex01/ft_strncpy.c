/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:25:02 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/10 15:10:22 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (++i < n && src[i])
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
