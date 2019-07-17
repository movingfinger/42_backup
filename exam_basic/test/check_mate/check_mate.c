#include <unistd.h>
#include <stdlib.h>

#define ABS(x) ((x < 0) ? (-x) : (x))

typedef struct	s_pos
{
	int			x;
	int			y;
}				t_pos;

int				is_unit(char c)
{
	if (c == 'B' || c == 'Q' || c == 'P' || c == 'R')
		return (1);
	return (0);
}

t_pos			find_king(char **s, int size)
{
	t_pos	king;

	king.x = -1;
	king.y = -1;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			if (s[i][j] == 'K')
				return ((t_pos) {j, i});
	return (king);
}

int				check_horizontal(char **s, int x, int y, t_pos king)
{
	if (king.x == x)
	{
		while (king.y != y)
		{
			y = king.y > y ? y + 1 : y - 1;
			if (king.y != y && (is_unit(s[y][x])))
				return (0);
		}
		return (1);
	}
	else if (king.y == y)
	{
		while (king.x != x)
		{
			x = king.x > x ? x + 1 : x - 1;
			if (king.x != x && (is_unit(s[y][x])))
				return (0);
		}
		return (1);
	}
	return (0);
}

int				check_vertical(char **s, int x, int y, t_pos king)
{
	if (ABS(king.x - x) == ABS(king.y - y))
	{
		while (king.x != x && king.y != y)
		{
			x = king.x > x ? x + 1 : x - 1;
			y = king.y > y ? y + 1 : y - 1;
			if (king.x != x && king.y != y && (is_unit(s[y][x])))
				return (0);
		}
		return (1);
	}
	return (0);
}

int				check_condition(char **s, int x, int y, t_pos king)
{
	if (s[y][x] == 'R')
		return (check_horizontal(s, x, y, king));
	else if (s[y][x] == 'B')
		return (check_vertical(s, x, y, king));
	else if (s[y][x] == 'Q')
		return (check_horizontal(s, x, y, king) || (check_vertical(s, x, y, king)));
	else if (s[y][x] == 'P')
		if (y - king.y == 1 && (king.x - x == 1 || x - king.x == 1))
			return (1);
	return (0);
}

int				check_pos(char ** s, int size)
{
	t_pos	king = find_king(s, size);

	if (king.x == -1 && king.y == -1)
		return (0);
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			if (check_condition(s, j, i, king))
				return (1);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		if ((check_pos(av + 1, ac - 1)))
			write(1, "Success", 7);
		else
			write(1, "Fail", 4);
	}
	else
		write(1, "Fail", 4);
	write(1, "\n", 1);
	return (0);
}
