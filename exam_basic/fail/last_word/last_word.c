#include <unistd.h>

int		is_space(char c)
{
	if (c == ' ' || (c >= '\t' && c <= '\n') || c == '\0')
		return (1);
	return (0);
}

void	last_word(char *s)
{
	int		i = 0;
	int		j = 0;

	while (s[i])
	{
		if (is_space(s[i]) && !is_space(s[i + 1]))
			j = i;
		i++;
	}
	 while (s[j])
		 write(1, &s[j++], 1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
	return (0);
}
