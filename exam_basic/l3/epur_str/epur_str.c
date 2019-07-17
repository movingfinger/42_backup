#include <unistd.h>

int		is_space(char c)
{
	if (c == ' ' || (c >= '\t' && c <= '\n'))
		return (1);
	return (0);
}

void	epur_str(char *s)
{
	int		flag = 0;

	while (is_space(*s))
		s++;
	while (*s)
	{
		if (is_space(*s))
		{
			flag = 1;
			s++;
		}
		if (*s && !is_space(*s))
		{
			if (flag == 1)
			{
				write(1, " ", 1);
				flag = 0;
			}
			write(1, &(*s), 1);
			s++;
		}
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		epur_str(av[1]);
	write(1, "\n", 1);
	return (0);
}
