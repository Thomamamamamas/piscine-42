/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:48:32 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/11 18:48:23 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < size && *dest)
	{
		i++;
		dest++;
	}
	if (i == size)
		return ( i + ft_strlen(src));
	j = 0;
	while (src[j])
	{
		if (j < size - i - 1)
			*dest++ = src[j];
		j++;
	}
	*dest = '\0';
	return (i + j);

}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main()
{
	int		n = 7;
	char	dest2[] = "LOL";
	char	src2[] = "MDR";
	ft_strlcat(dest2, src2, n);
	printf("%s\n", dest2);
}
