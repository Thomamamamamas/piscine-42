int	ft_is_prime(int nb)
{
	unsigned int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	while (i * i <= (unsigned int)nb)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 199;
	printf("%d\n", ft_is_prime(nb));
	return (0);
}
*/
