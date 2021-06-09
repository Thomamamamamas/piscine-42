#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
}

int	main()
{
	char	str[] = "LOL";
	char	to_find[] = "LO";
	char	* res =  strstr(str, to_find);
	printf("%s\n", res);
	return (0);
}
