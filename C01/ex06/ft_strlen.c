#include <unistd.h>
#include <stdio.h>

int	ft_str_len(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}
