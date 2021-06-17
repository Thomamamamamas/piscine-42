int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 0;
	res = nb;
	if (power < 1)
		return (0);
	else if (power == 1)
		return (nb);
	while (power > 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;
	int	res;

	nb = 5;
	power = 3;
	res = ft_iterative_power(nb, power);
	printf("%d\n", res);
	return (0);
}
*/
