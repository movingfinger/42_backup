#include <unistd.h>

#define IS_SPACE(x) ((x == ' ') || (x >= '\t' && x <= '\n'))

void	rev_wstr(char *s, int first)
{
	int		i = 0;
	int		start = 0;

	if (s[i])
	{
		while (s[i] && IS_SPACE(s[i]))
			i++;
		if (!s[i])
			return ;
		start = i;
		while (s[i] && !IS_SPACE(s[i]))
			i++;
		rev_wstr(&s[i], 0);
		write(1, &s[start], i - start);
		if (first == 0)
			write(1, " ", 1);
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1], 1);
	write(1, "\n", 1);
	return (0);
}
