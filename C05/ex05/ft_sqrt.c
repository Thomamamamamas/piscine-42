int	ft_sqrt(int nb)
{
	unsigned int	i;
	int				res;

	i = 1;
	res = 0;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (i * i <= (unsigned int)nb)
	{
		res = nb / i;
		if (res * res == nb)
			return (res);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 81;
	printf("%d\n", ft_sqrt(nb));
	return (0);
}
*/
