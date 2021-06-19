#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include "dico.h"

#define MAX_LINE_LENGHT 10000
int	count_line_dico(Dico *D, char *line)
{
	int	n;
	int	res;

	n = 0;
	res = 0;
	while (line[n])
	{
		if (line[n] == '\n')
			res++;
		n++;
	}
	return (res);
}


void	parse_dico(Dico *D, char *line, char *tmp_key, char *tmp_value)
{
	int	n;
	int	i;
	int	index;
	int	first_step;

	n = 0;
	i = 0;
	index = 0;
	first_step = 0;
	while (line[n])
	{
		if (line[n] >= '0' && line[n] <= '9' && first_step == 0)
		{
			tmp_key[i] = line[n];
			i++;
		}
		if (line[n] != ' '  && line[n] != '\n' && first_step == 1)
		{
			tmp_value[i] = line[n];
			i++;
		}
		else if (line[n] == ':')
		{
			tmp_key[i] = line[n];
			i = 0;
			first_step = 1;
		}
		else if (line[n] == '\n')
		{
			tmp_value[i] = '\n';
			i = 0;
			first_step = 0;
			index++;
		}
		n++;
	}
}

void init_dico(Dico *D, char **argv, char *tmp_key, char *tmp_value)
{
	int	fd;
	int	nb_line;
	char	line[65535];

	fd = open(argv[1], O_RDONLY); 
	nb_line = 0;
	if (fd == -1)
	{
		printf("Error\n");
		return ;
	}
	read(fd, line, MAX_LINE_LENGHT);
	close(fd);
	nb_line = count_line_dico(D, line);
	printf("%d\n", nb_line);
	parse_dico(D, line, tmp_key, tmp_value);
}
