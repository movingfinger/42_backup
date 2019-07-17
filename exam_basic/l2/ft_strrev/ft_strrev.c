char    *ft_strrev(char *str)
{
	int		i = 0;
	int		j = 0;
	int		k = 0;
	char	temp;

	while (str[i])
		i++;
	k = i / 2;
	while (k--)
	{
		temp = str[j];
		str[j] = str[i - 1];
		str[i - 1] = temp;
		j++;
		i--;
	}
	return (str);
}
