#include <stdlib.h>
#include <stdio.h>

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

int		main(int ac, char **av)
{
	if (ac == 4)
		printf("%d", do_op(atoi(av[1]), atoi(av[3]), av[2][0]));
	printf("\n");
	return (0);
}
