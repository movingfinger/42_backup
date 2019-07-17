#include <unistd.h>

void	ft_putstr(char *s)
{
	int		i;

	i = 0;
	while(s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac >= 2)
		ft_putstr(av[1]);
	write(1, "\n", 1);
}
