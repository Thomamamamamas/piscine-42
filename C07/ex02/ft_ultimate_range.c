/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 10:58:12 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/17 11:11:01 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;

	i = 0;
	diff = max - min;
	*range = malloc(diff * sizeof(int));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!*range)
		return (-1);
	while (i < diff)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (diff);
}
/*
#include <stdio.h>

int	main()
{
	int	i;
	int	*range;

	i = 0;
	ft_ultimate_range(&range, 1, 6);
	while(i < 5)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
*/
