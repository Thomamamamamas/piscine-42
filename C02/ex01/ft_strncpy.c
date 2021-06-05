/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:25:02 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/05 15:03:08 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	x;
	int	y;
	int j;

	x = ft_strlen(dest);
	y = ft_strlen(src);
	y = 0;
	j = 0;
	while (src[n])
	{
		j++;
		if (x == y)
		{
			dest[j] = src[j];
		}
	}
}

int		ft_strlen(char str)
{
	int	n;

	n = 0;
	if (str = 0)
	{
		return (0);
	}
	while (str[n])
	{
		n++;
	}
	return (n);
}

int	main()
{
	char	str1[11] = "Pute";
	char	str2[15] = "Pupute";
	unsigned int n = 10;
	ft_srncpy(str1, str2, n);
}
