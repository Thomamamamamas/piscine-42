/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 13:39:30 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/11 17:01:03 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*temp;
	int	m;

	temp = dest;
	m = 0;
	while (*temp)
		temp++;
	while (m < nb && *src)
	{
		*temp++ = *src++;
		m++;
	}
	*temp = '\0';
	return (dest);
}
