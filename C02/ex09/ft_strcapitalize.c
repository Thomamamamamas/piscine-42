/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 16:34:12 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/09 18:24:16 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		is_uppercase(char s);
int		is_lowercase(char s);
int		is_numeric(char s);
int		is_not_alphanumeric(char s);

int	is_uppercase(char s)
{
	if (s >= 'A' && s <= 'Z')
		return (1);
	return (0);
}

int	is_lowercase(char s)
{
	if (s >= 'a' && s <= 'z')
		return (1);
	return (0);
}

int	is_numeric(char s)
{
	if (s >= '0' && s <= '9')
		return (1);
	return (0);
}

int	is_not_alphanumeric(char s)
{
	if (!(is_lowercase(s)) && !(is_numeric(s)) && !(is_uppercase(s)))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	prev[0];
	int		n;

	n = 0;
	prev[0] = ' ';
	while (str[n])
	{
		if (is_lowercase(str[n]) && is_not_alphanumeric(prev[0]))
			str[n] = str[n] - 32;
		else if (is_uppercase(str[n]) && !(is_not_alphanumeric(prev[0])))
			str[n] = str[n] + 32;
		prev[0] = str[n];
		n++;
	}
	return (str);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s\n", str);
	return 0;
}
*/
