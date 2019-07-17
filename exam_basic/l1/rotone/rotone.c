#include <unistd.h>

void	rotone(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = (*str - 'a' + 1) % 26 + 'a';
		else if (*str >= 'A' && *str <= 'Z')
			*str = (*str - 'A' + 1) % 26 + 'A';
		write(1, &(*str++), 1);
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
	return (0);
}
