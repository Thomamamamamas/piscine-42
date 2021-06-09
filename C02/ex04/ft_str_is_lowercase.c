int	ft_str_is_lowercase(char *str)
{
	int	n;

	n = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[n])
	{
		if (!(str[n] >= 97 && str[n] <= 122))
		{
			return (0);
		}
		n++;
	}
	return (1);
}
