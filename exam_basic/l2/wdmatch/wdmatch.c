#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
		write(1, &(*s++), 1);
}

int		wdmatch(char *s1, char *s2)
{
	while (*s2)
	{
		if (s1 && *s1 == *s2)
			s1++;
		s2++;
	}
	if (*s1 == '\0')
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		if (wdmatch(av[1], av[2]))
			ft_putstr(av[1]);
	write(1, "\n", 1);
}
