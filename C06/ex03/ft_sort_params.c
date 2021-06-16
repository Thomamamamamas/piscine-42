int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char *s1, char *s2)
{
	char	*tmp;
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		*tmp = s1[i];
		s1[i] = s2[i];
		s2[i] = *tmp;
		i++;
	}
}

int	ft_sort(char *s1, char *s2)
{
	int	i;
	int	cmt1;
	int	cmt2;

	i = 0;
	cmt1 = 0;
	cmt2 = 0;
	while (s1[i] || s2[i])
	{
		if (ft_strcmp(s1, s2) != 0)
		{
			if (ft_strcmp(s1, s2) < 0)
				cmt1++;
			else
				cmt2++;
		}
		i++;
	}
	if (cmt1 > cmt2)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	int	res;
	int	i;
	int	j;

	res = 0;
	j = 0;
	if (argc <= 1)
		return (0);
	while (i < argc)
	{
		j = 0;
		while (j < i)
		{
			res = ft_sort(argv[j + 1], argv[j]);
			if (res == 1)
				ft_swap(argv[j + 1], argv[j]);
			j++;
		}
		i++;;
	}
	return (0);
}
