int	ft_strcmp(char *c1, char *c2)
{
	int	n;

	n = 0;
	while (c1[n] && c2[n] && c1[n] == c2[n])
		n++;
	if (c1[n] != c2[n])
		return (c1[n] - c2[n]);
	return (0);
}
