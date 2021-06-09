/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:48:32 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/09 12:56:07 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	n;
	unsigned int	m;
	int	i;

	n = 0;
	m = 0;
	i = 0;
	while (dest[n])
		n++;
	while (m < size)
	{
		if (src[m])
		{
			dest[n] = src[m];
			n++;
			i++;
		}
		else
			break ;
		m++;
	}
	dest[n] = '\0';
	return (i);
}
