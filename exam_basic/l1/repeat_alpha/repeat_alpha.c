#include <unistd.h>

void	repeat_alpha(char *s)
{
	char	n;

	while (*s)
	{
		n = 0;
		if (*s >= 'A' && *s <= 'Z')
		{
			n = *s - 'A';
			for (int i = 0; i < n; i++)
				write(1, &(*s), 1);
		}
		else if (*s >= 'a' && *s <= 'z')
		{
			n = *s - 'a';
			for (int i = 0; i < n; i++)
				write(1, &(*s), 1);
		}
		write(1, &(*s), 1);
		s++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		repeat_alpha(av[1]);
	write(1, "\n", 1);
	return (0);
}
