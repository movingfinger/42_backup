#include <stdlib.h>

int		ft_strlen(char *s)
{
	int		i = 0;

	while (s[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	int		i = ft_strlen(src);
	int		j = 0;
	char	*res;

	res = (char *)malloc(sizeof(char) * i);
	if (res)
	{
		while (i > j)
		{
			res[j] = src[j];
			j++;
		}
		res[j] = '\0';
		return (res);
	}
	return (NULL);
}
