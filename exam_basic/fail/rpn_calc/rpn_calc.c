#include <stdio.h>
#include <stdlib.h>

int		do_op(int n1, int n2, char c)
{
	if (c == '+')
		return (n1 + n2);
	else if (c == '-')
		return (n1 - n2);
	else if (c == '*')
		return (n1 * n2);
	else if (c == '/')
		return (n1 / n2);
	else if (c == '%')
		return (n1 % n2);
	return (0);
}

int		is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		is_op(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
		return (1);
	return (0);
}

int		rpn_calc(char *s)
{
	int		tab[2000] = {0};
	int		index = -1;

	if (is_op(*s))
		return (0);
	while (*s)
	{
		while (is_num(*s))
		{
			tab[++index] = atoi(s);
			while (*s && *s != ' ')
				++s;
		}

		if (*s && is_op(*s))
		{
			if (index != 0)
				tab[index - 1] = do_op(tab[index - 1], tab[index], *s);
			else 
				return (0);
			--index;
			++s;
		}
		if (*s && *s == ' ')
		{
			if (*(s + 1) && (*(s + 1) == ' ' || *(s + 1) == '\t'))
				return (0);
			++s;
		}
	}
	if (index == 0)
	{
		printf("%d", tab[index]);
		return (1);
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		if (!rpn_calc(av[1]))
			printf("Error");
	}
	else
		printf("Error");
	printf("\n");
}
