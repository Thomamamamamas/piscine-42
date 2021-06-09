/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 14:29:18 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/09 14:29:21 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main()
{
	char	str[] = "p";
	int n = strlen(str);
	int m = ft_strlen(str);
	printf("%d\n", n);
	printf("%d\n", m);
	return (0);
}
*/
