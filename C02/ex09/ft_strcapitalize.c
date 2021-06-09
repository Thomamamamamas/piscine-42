/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 16:34:12 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/09 12:53:58 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void	define_last_char(char *last_char, char *str, int n);
char	*ft_strcapitalize(char *str)
{
	int		n;
	char	last_char[0];

	n = 0;
	last_char[0] = ' ';
	while (str[n])
	{
		if (!(last_char[0] >= 65 && last_char[0] <= 90))
		{
			if (str[n] >= 97 && str[n] <= 122)
				str[n] = str[n] -32;
		}
		else if (!(last_char[0] >= 97 && last_char <= 122))
		{
			
		}
		
		
		last_char[0] = str[n];
		n++;
	}
	printf("%s\n", str);
	return (str);
}

int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	return 0;
}
