#include <unistd.h>

int		is_valid_close(char c1, char c2)
{
	if ((c1 == '(' && c2 == ')') ||
			(c1 == '{' && c2 == '}') ||
			(c1 == '[' && c2 == ']'))
		return (1);
	return (0);
}

int		is_valid_open_brackets(char c)
{
	if (c == '(' || c == '{' || c =='[')
		return (1);
	return (0);
}

int		is_valid_close_brackets(char c)
{
	if (c == ')' || c == '}' || c ==']')
		return (1);
	return (0);
}

int		brackets(char *s)
{
	char	tab[1000];
	int		index = 0;

	while (*s)
	{
		if (is_valid_open_brackets(*s))
			tab[++index] = *s;
		else if (is_valid_close_brackets(*s))
		{
			if (is_valid_close(tab[index], *s))
				--index;
			else
				return (0);
		}
		++s;
	}
	if (index == 0)
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
			if (brackets(av[i]))
				write(1, "OK", 2);
			else
				write(1, "Error", 5);
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
