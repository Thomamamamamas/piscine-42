int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb >= 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n;
	int	res;

	n = 5;
	res = ft_iterative_factorial(n);
	printf("%d\n", res);
	return (0);
}
*/
