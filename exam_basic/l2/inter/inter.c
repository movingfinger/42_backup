#include <unistd.h>

int		check_dup(const char *s1, char c, int i)
{
	while(i >= 0)
		if (s1[i--] == c)
			return (0);
	return (1);
}

void	inter(const char *s1, const char *s2)
{
	int		i = 0;
	int		j;

	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				if (check_dup(s1, s1[i], i - 1))
				{
					write(1, &s1[i], 1);
					break;
				}
			}
			j++;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
