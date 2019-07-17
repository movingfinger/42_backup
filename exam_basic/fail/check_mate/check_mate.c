#include <unistd.h>
#include <stdlib.h>

typedef struct	s_pos
{
	int			x;
	int			y;
}				t_pos;

t_pos	is_king(char **s, char c, int n)
{
	t_pos	king;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (s[i][j] == c)
			{
				king.x = i;
				king.y = j;
			}
		}
	}
	return (king);
}

int		check_diagonal(char **s, int x, int y, t_pos king)
{
	int		slope = 0;
	if (x != king.x)
		slope = (king.y - y) / (king.x - x);
	if (slope == -1 && y > king.y)
	{
		while (x - king.x != -1 && y - king.y != 1)
		{
			x--;
			y--;
			if ((s[y][x] != '.') && (s[y][x] != 'K'))
				return (0);
		}
	}
	else if (slope == -1 && y < king.y)
	{
		while (x - king.x != -1 && y - king.y != -1)
		{
			x--;
			y++;
			if ((s[y][x] != '.') && (s[y][x] != 'K'))
				return (0);
		}
	}
	else if (slope == 1 && y > king.y)
	{
		while (x - king.x != 1 && y - king.y != 1)
		{
			x++;
			y--;
			if ((s[y][x] != '.') && (s[y][x] != 'K'))
				return (0);
		}
	}
	else if (slope == 1 && y < king.y)
	{
		while (x - king.x != 1 && y - king.y != -1)
		{
			x++;
			y++;
			if ((s[y][x] != '.') && (s[y][x] != 'K'))
				return (0);
		}
	}
	return (1);
}

int 	check_vh(char **s, int x, int y, t_pos king)
{
	if (x == king.x)
	{
		while (y != king.y)
		{
			(y > king.y ? y-- : y++);
			if ((s[y][x] != '.') && (s[y][x] != 'K'))
				return (0);
		}
	}
	else if (y == king.y)
	{
		while (x != king.x)
		{
			(x > king.x ? x-- : x++);
			if ((s[y][x] != '.') && (s[y][x] != 'K')) 
				return (0);
		}
	}
	return (1);
}

int		check_block(char **s, char c, int x, int y, t_pos king)
{
	int		slope = 0;
	if (x != king.x)
		slope = (y - king.y) / (x - king.x);

	switch (c)
	{
		case 'Q' :
			if (!check_diagonal(s, x, y, king) || !check_vh(s, x, y, king))
				return (0);
			break ;
		case 'B' :
			if (!check_diagonal(s, x, y, king))
				return (0);
			break ;
		case 'R' :
			if (!check_vh(s, x, y, king))
				return (0);
			break ;
	}
	return (1);
}

int		check_mate(char **s, int n)
{
	t_pos	king = is_king(s, 'K', n);
	int		slope;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			slope = 0;
			if (j != king.x)
				slope = (king.y - i) / (king.x - j);
			if (s[i][j] == 'Q')
			{
				if (j == king.x || i == king.y || slope == -1 || slope == 1)
					if (check_block(s, 'Q', j, i, king))
						return (1);
			}
			else if (s[i][j] == 'R')
			{
				if (j == king.x || i == king.y)
					return (1);
			}
			else if (s[i][j] == 'B')
			{
				if (slope == -1 || slope == 1)
					if (check_block(s, 'B', j, i, king))
						return (1);
			}
			else if (s[i][j] == 'P')
			{
				if (((king.x - j) == -1 && (king.y - i) == -1) || ((king.x - j) == -1 && (king.y - i) == 1))
					return (1);
			}
		}
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (ac > 1 && ac < 10)
	{
		if (check_mate(av + 1, ac - 1))
			write(1, "Success", 7);
		else
			write(1, "Fail", 4);
	}
	write(1, "\n", 1);
	return (0);
}
