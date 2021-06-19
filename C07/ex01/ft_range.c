#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	diff;

	i = 0;
	diff = max - min;
	*tab = (int)malloc(sizeof(int *) * diff);
	if (min >= max)
		return (NULL);
	while (i < diff)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*
#include <stdio.h>

int	main()
{
	int	i;
	int	*tab;

	tab = ft_range(1, 6);
	i = 0;
	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
*/
