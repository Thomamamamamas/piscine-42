int	is_numeric(char *str)
{
	if (*str >= '0' && *str <= '9')
		return (1);
	return (0);
}

int	determine_signe(char *str, int last_signe)
{
	int	n;

	n = 0;
	if (*str == '+')
		n = 0;
	else if (*str == '-')
		n = 1;
	if (n == 0 && last_signe == 0)
		return (1);
	else if ((n == 0 && last_signe == 1) || (n == 1 && last_signe == 0))
		return (0);
	else
		return (1);
}

int	ft_atoi(char *str)
{
	int	n;
	int	i;
	int	diz;
	int	res;
	int	signe;

	n = 0;
	signe = 1;
	while (str[n])
	{
		i = n + 1;
		diz = 1;
		if (is_numeric(&str[n]))
		{
			while (str[i])
			{
				diz = diz * 10;
				i++;
			}
		res = res + (str[n] - 48) * diz;
		}
		else if (str[n] == '+' || str[n] == '-')
		{
			signe = determine_signe(&str[n], signe);
		}
		n++;
	}
	return (res);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main()
{
	char	str[] = "-42";
	int	n;
	n = ft_atoi(str);
	printf("%d\n", n);
	return (0);
}
