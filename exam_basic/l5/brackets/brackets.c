#include <unistd.h>

int		is_valid(char c1, char c2)
{
	if (c1 == '(' && c2 == ')')
		return (1);
	else if  (c1 == '{' && c2 == '}')
		return (1);
	else if  (c1 == '[' && c2 == ']')
		return (1);
	return (0);
}

int		brackets(char *s)
{
	char	br[1000];
	int		i = 0;
	int		result = 1;

	while (*s)
	{
		if (*s == '(' || *s == '{' || *s == '[')
		{
			++i;
			br[i] = *s;
		}
		else if (*s == ')' || *s == '}' || *s == ']')
		{
			if (is_valid(br[i], *s))
				result = 1;
			else
				result = 0;
			i--;
		}
		++s;
	}
	if (result != 1 || i != 0)
		result = 0;
	return (result);
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
