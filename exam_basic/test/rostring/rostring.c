#include <unistd.h>
#include <stdlib.h>

#define IS_SPACE(x) ((x == ' ' || (x >= '\t' && x <= '\n')))

void	ft_putstr(char *s)
{
	while (*s)
		write(1, &(*s++), 1);
}

int		count_words(char *s)
{
	int		i = 0;
	int		count = 0;

	while (s[i])
	{
		while (IS_SPACE(s[i]))
			i++;
		if (s[i] && !IS_SPACE(s[i]))
		{
			count++;
			while (s[i] && !IS_SPACE(s[i]))
				i++;
		}		
	}
	return (count);
}

char	**rostring(char *s)
{
	int		size = count_words(s);
	int		len = 0;
	int		i = 0;
	int		w_len;
	char	**res;
	
	if (!(res = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	while (s[i])
	{
		w_len = 0;
		while (IS_SPACE(s[i]))
			i++;
		if (s[i] && !IS_SPACE(s[i]))
		{
			while (s[i] && !IS_SPACE(s[i]))
			{
				i++;
				w_len++;
			}
			res[len] = (char *)malloc(sizeof(char) * (w_len + 1));
			for (int j = 0; j < w_len; j++)
				res[len][j] = s[i - w_len + j];
			res[len++][w_len] = '\0';
		}
	}
	res[size] = NULL;
	return (res);
}

int		main(int ac, char **av)
{
	int		count = 0;
	char	**s;
	if (ac > 1)
	{
		count = count_words(av[1]);
		s = rostring(av[1]);
		for (int i = 1; i < count; i++)
		{
			ft_putstr(s[i]);
			write(1, " ", 1);
		}
		ft_putstr(s[0]);
	}
	write(1, "\n", 1);
	return (0);
}
