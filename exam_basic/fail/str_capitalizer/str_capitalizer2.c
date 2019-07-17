#include <unistd.h>

int		is_space(char c)
{
	if (c == ' ' || (c <= '\t' && c >= '\n'))
		return (1);
	return (0);
}

void	str_capitalizer(char *s)
{
	if (*s >= 'a' && *s <= 'z')
	{
		*s -= 32;
		write(1, &(*s++), 1);
	}
	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z')
			*s += 32;
		if (is_space(*(s - 1)) && (*s >= 'a' && *s <= 'z'))
			*s -= 32;
		write(1, &(*s++), 1);
	}
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		for	(int i = 0; i < ac; i++)
		{
			str_capitalizer(av[i]);
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
