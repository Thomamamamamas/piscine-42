/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:35:51 by tcasale           #+#    #+#             */
/*   Updated: 2021/06/10 12:35:58 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

int	ft_checkstrstr(char *str, char *to_find, int valide)
{
	if (str == to_find && valide == 1)
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{

}

/*
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
*/
