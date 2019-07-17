#include <stdlib.h>

int		is_space(char c)
{
	if (c == ' ' || (c >= '\t' && c <= '\n'))
		return (1);
	return (0);
}

int		check_len(char *str)
{
	int		i = 0;
	int		len = 0;

	while (str[i])
	{
		if (is_space(str[i]))
				i++;
		else
		{
			len++;
			while (str[i] && !is_space(str[i]))
				i++;
		}
	}
	return (len);
}

char	**ft_split(char *str)
{
	char 	**res;
	int 	len = 0;
	int		i = 0;
	int		j = 0;
	int		k = 0;
	int		w_len = 0;
	
	len = check_len(str);
	if ((res = (char **)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (str[i] && j < len)
	{
		while (str[i] && is_space(str[i]))
			i++;
		while (str[i] && !is_space(str[i]))
		{
			w_len++;
			i++;
		}
		if ((res[j] = (char *)malloc(sizeof(char) * (w_len + 1))))
			return (0);
		k = 0;
		while (w_len)
			res[j][k++] = str[i - w_len--];
		res[j++][k] = '\0';
	}
	return (res);
}
