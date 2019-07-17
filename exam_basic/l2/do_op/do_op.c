#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_do_op(char *s1, char *s2, char *s3)
{
	int		n1 = atoi(s1);
	int		n2 = atoi(s3);
	int		res = 0;
	
	if (s2[0] == '+')
		res = n1 + n2;
	else if (s2[0] == '-')
		res = n1 - n2;
	else if (s2[0] == '*')
		res = n1 * n2;
	else if (s2[0] == '/')
		res = n1 / n2;
	else if (s2[0] == '%')
		res =  n1 % n2;
	printf("%d", res);
}

int		main(int ac, char **av)
{
	if (ac == 4)
		if (av[1] && av[2] && av[3])
			ft_do_op(av[1], av[2], av[3]);
	printf("\n");
	return (0);
}
