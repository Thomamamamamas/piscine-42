int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	int	n;
	int	res;

	n = 5;
	res = ft_recursive_factorial(n);
	printf("%d\n", res);
	return (0);
}
*/
