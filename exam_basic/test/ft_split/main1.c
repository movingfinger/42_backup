#include <stdio.h>

char    **ft_split(char *str);
int		words_len(char *s);

int		main(int ac, char **av)
{
	char	**s;
	int		n = 0;

	if (ac == 2)
	{
		s = ft_split(av[1]);
		n = words_len(av[1]);
		for (int i = 0; i < n; i++)
			printf("%s\n", s[i]);
	}
	return (0);
}
