/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 13:39:30 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/09 12:55:28 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	n;
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
			else if (src[m] == '\0')
			{
				dest[n] = '\0';
				n++;
			}
		}
		m++;
	}
	return (dest);
}
