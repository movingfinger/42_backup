#include <unistd.h>
#include <stdlib.h>

#define ABS(x) ((x < 0) ? (-x) : (x))         // need for check_diagonal
#define IS_UNIT(x) ((x == 'B') || (x == 'Q') || (x == 'P') || (x == 'R'))

typedef struct	s_pos
{
	int			x;
	int			y;
}				t_pos;

// find king's position, and return to t_pos struct [y position][x position]
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


// check horizontal and vertical line, for R and Q
int				check_straight(char **s, int x, int y, t_pos king)
{
	if (king.x == x)			// check horizontal
	{
		while (king.y != y)
		{
			y = king.y > y ? y + 1 : y - 1;
			if (king.y != y && (IS_UNIT(s[y][x])))
				return (0);
		}
		return (1);
	}
	else if (king.y == y)       // check vertical
	{
		while (king.x != x)
		{
			x = king.x > x ? x + 1 : x - 1;
			if (king.x != x && (IS_UNIT(s[y][x])))
				return (0);
		}
		return (1);
	}
	return (0);
}

// check diagonal line, for B and Q
int				check_diagonal(char **s, int x, int y, t_pos king)
{
	if (ABS((king.x - x)) == ABS((king.y - y)))
	{
		while (king.x != x && king.y != y)
		{
			x = king.x > x ? x + 1 : x - 1;
			y = king.y > y ? y + 1 : y - 1;
			if ((king.x != x) && (king.y != y) && IS_UNIT(s[y][x]))
				return (0);
		}
		return (1);
	}
	return (0);
}

// chech all unit
int				check_condition(char **s, int x, int y, t_pos king)
{
	if (s[y][x] == 'R')
		return (check_straight(s, x, y, king));
	else if (s[y][x] == 'B')
		return (check_diagonal(s, x, y, king));
	else if (s[y][x] == 'Q')
		return (check_straight(s, x, y, king) || (check_diagonal(s, x, y, king)));
	else if (s[y][x] == 'P')    //Pawn only attack bottom to up, so check upper directions
		if (y - king.y == 1 && (king.x - x == 1 || x - king.x == 1))
			return (1);
	return (0);
}

// find king, and check all unit's direction, and return 1 if checkmate, 0 for other.
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
