#include <unistd.h>

void	str_capitalizer(char *s)
{
	int		i;

	i = 0;
	if (s[0] && s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	write(1, &s[0], 1);
	while (s[++i])
	{	
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		if (s[i - 1] && (s[i - 1] == ' ' || s[i - 1] == '\t') && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
		write(1, &s[i], 1);
	}
}

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac > 1)
	{
		while(av[i])
		{
			str_capitalizer(av[i++]);
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
}
