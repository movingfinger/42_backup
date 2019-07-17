#include <stdio.h>
#include <stdlib.h>

#define IS_OP(x) (x == '+' || x == '-' || x == '*' || x == '/' || x == '%')
#define IS_DIGIT(x) (x >= '0' && x <= '9')

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

int		rpn_calc(char *s)
{
	int		tab[2000] = {0};
	int		index = -1;

	if (IS_OP(*s))
		return (0);
	while (*s)
	{
		while (IS_DIGIT(*s))
		{
			tab[++index] = atoi(s);
			while (*s && *s != ' ')
				++s;
		}

		if (*s && IS_OP(*s))
		{
			if (index != 0)
			{
				if ((*s == '/' || *s == '%') && tab[index] == 0)
					return (0);
				tab[index - 1] = do_op(tab[index - 1], tab[index], *s);
			}
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

