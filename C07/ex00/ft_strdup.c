#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] || dest[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *dest;
	dest = malloc(sizeof(char ) * ft_strlen(src));
	if (!dest)
		return (NULL);
	return (ft_strcpy(dest, src));
}
/*
#include <stdio.h>

int	main()
{
	char	src[] = "pute";
	printf("%s\n", ft_strdup(src));
	return (0);
}
*/
