#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

void	ft_checkstrstr(char *str, char *to_find, int valide)
{
	if (str == to_find && valide == 1)
		return (1);
}

char	exchamgestr(char *str,


char	*ft_strstr(char *str, char *to_find)
{
	int	n;
	int	temp;
	int	i;
	int	start
	int	size;

	n = 0;
	size = ft_strlen(to_find);
	while (str[n])
	{
		i = 0;
		temp = n
		if (to_find[i] == str[n])
		{
			start = i;
			while (to_find[i])
			{
				i++;
				n++;
				valide = ft_checkstrstr(str[n], to_find[i], valide);
				if (i == size)
					return (exchangestr(str, start, ft_strlen(str))
			}
			n = temp;
		}
		n++;
	}
	return (NULL);
}

int	main()
{
	char	str[] = "LOL";
	char	to_find[] = "O";
	char	* res =  strstr(str, to_find);
	char	* res2 = ft_strstr(str, to_find);
	printf("%s\n", res);
	printf("%s\n", res2);
	return (0);
}
