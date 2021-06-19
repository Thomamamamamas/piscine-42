#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "list.c"
#include "utility.c"
#include "dico.c"

void	print_dico(char *tmp_key, char *tmp_value)
{
	int	n;
	int	m;

	n = 0;
	m = 0;
	while(tmp_key[n])
	{
		if (tmp_key[n] == ':')
			printf("\n");
		printf("%c", tmp_key[n]);
		n++;
	}
}

void	init_prog(List *L, char **argv)
{
	char	*tmp_key;
	char	*tmp_value;

	tmp_key = malloc(sizeof(char) * 65535);
	tmp_value = malloc(sizeof(char) * 65535);
	Dico *D;
	init_dico(D, argv, tmp_key, tmp_value);
	print_dico(tmp_key, tmp_value);
}

int	main(int argc, char **argv)
{
	int	size;
	int	n;
	int	i;
	List	*L;
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	size = ft_strlen(argv);
	n = 0;
	i = 0;
	L = malloc(sizeof(List *) * size);
	initList(L, size);
	while (argv[2][i])
	{
		n = addElement(argv, i, n, L);
		i++;
	}
	init_prog(L, argv);
	return (0);
}
