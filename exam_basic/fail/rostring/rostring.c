#include <unistd.h>
#include <stdlib.h>

#define IS_SPACE(x) ((x == ' ' || (x >= '\t' && x <= '\n')))

void	ft_putstr(char *s)
{
	while (*s)
		write(1, &(*s++), 1);
}

int		word_count(char *s)
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
	int		count = word_count(s);
	char	**res;
	int		len;
	int		w_count = 0;
	int		i = 0;
	char 	c;

	if (!(res = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	
	while (s[i])
	{
		while (IS_SPACE(s[i]))
			i++;
		if (!IS_SPACE(s[i]))
		{
			len = 0;
			while (s[i] && !IS_SPACE(s[i]))
			{
				len++;
				i++;
			}
			res[w_count] = (char *)malloc(sizeof(char) * len + 1);
			res[w_count][len] = '\0';
			for (int j = 0; j < len; j++)
			{
				c = s[i - len + j];
				res[w_count][j] = c;
			}
		}
		w_count++;
	}
	res[count] = NULL;
	return (res);
}

int		main(int ac, char **av)
{
	char 	**res;
	int		count = 0;
	int		i = 1;

	if (ac > 1)
	{
		count = word_count(av[1]);
		res = rostring(av[1]);
		if (count > 2)
		{
			while (count > i)
			{
				ft_putstr(res[i++]);
				write(1, " ", 1);
			}
			ft_putstr(res[0]);
		}
		else
			ft_putstr(res[0]);
	}
	write(1, "\n", 1);
	return (0);	
}
