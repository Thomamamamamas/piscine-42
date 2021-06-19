#include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	int	nb;
	int	power;
	int	res;

	nb = 2;
	power = 4;
	printf("%d\n", ft_recursive_power(nb, power));
	return (0);
}
*/
