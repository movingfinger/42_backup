#include <unistd.h>
#include <stdlib.h>

#define IS_SPACE(x) ((x == ' ') || (x >= '\t' && x <= '\n'))

void	ft_putstr(char *s)
{
	int		i = 0;
	while (s[i])
		write(1, &(s[i++]), 1);
}

int		words_len(char *s)
{
	int		n = 0;
	int		i = 0;

	while (s[i])
	{
		while (IS_SPACE(s[i]))
			i++;
		if (s[i] && !IS_SPACE(s[i]))
		{
			n++;
			while (s[i] && !IS_SPACE(s[i]))
				i++;
		}
	}
	return (n);
}

char	**rev_wstr(char *s)
{
	char	**res;
	int		count = words_len(s);
	int		i = 0;
	int		k = 0;
	int		len;

	res = (char **)malloc(sizeof(char *) * (count + 1));
	while (s[k])
	{
		while (IS_SPACE(s[k]))
			k++;
		len = 0;
		if (s[k] && !IS_SPACE(s[k]))
		{
			while (s[k] && !IS_SPACE(s[k]))
			{
				len++;
				k++;
			}
			res[i] = (char *)malloc(sizeof(char) * (len + 1));
			for (int j = 0; j < len; j++)
				res[i][j] = s[k -len + j];
			res[i++][len] = '\0';
		}
	}
	res[count] = NULL;
	return (res);
}

void	print_result(char **s, int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		ft_putstr(s[i]);
		if (i != 0)
			ft_putstr(" ");
	}

}

int		main(int ac, char **av)
{
	if (ac == 2)
		print_result(rev_wstr(av[1]), words_len(av[1]));
	ft_putstr("\n");
	return (0);
}
