#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void	initList(List *L, int size)
{
	int	n;

	n = 0;
		while (n <= size)
		{
			L[n].data = '\0';
			L[n]. prev = '\0';
			L[n].next = '\0';
			L[n].index = '0';
			L[n].size = size;
			n++;
		}
}

int		isEmpty(List *L)
{
	if (L[0].data == '\0')
		return (1);
	return (0);
}

int	addElement(char **str, int i, int n, List *L)
{
	if (str[2][i] >= '0' && str[2][i] <= '9')
	{
		if (!isEmpty(L))
		{
			L[n].data = str[2][n];
			L[n - 1].next = L[n].data;
			L[n].index = n;
			printf("%c", L[n].data);
		}
		else if (str[2][n] != '0')
		{
			L[0].data = str[2][n];
			L[0].prev = '\0';
			L[0].index = n;
			printf("%c", L[0].data);
		}
		n++;
	}
	return (n);
}
