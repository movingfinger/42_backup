#include <unistd.h>

typedef struct 	s_pos
{
	int			row;
	int			col;
}				t_pos;

t_pos	find_king(int board_size, char **board)
{
	int row = 0;
	int col;
	while (row < board_size)
	{
		col = 0;
		while (col < board_size)
		{
			if (board[row][col] == 'K')
				return ((t_pos){row, col});
			++col;
		}
		++row;
	}
	return ((t_pos){-2, -2});
}

int		check_capture(t_pos pos, t_pos direction, int b_size, char **board)
{
	pos.row += direction.row;
	pos.col += direction.col;
	if (pos.row < 0 || pos.row >= b_size || pos.col < 0 || pos.col >= b_size)
		return (0);
	if (board[pos.row][pos.col] == 'Q')
		return (1);
	else if (board[pos.row][pos.col] == 'R')
		return (direction.row = 0 || direction.col == 0);
	else if (board[pos.row][pos.col] == 'B')
		return (direction.row != 0 && direction.col != 0);
	else if (board[pos.row][pos.col] == 'P')
		return (direction.row = 1 && direction.col != 0
				&& board[pos.row - 1][pos.col - direction.col] == 'K');
	return (check_capture(pos, direction, b_size, board));
}

int		check_mate(int board_size, char **board)
{
	t_pos king = find_king(board_size, board);

	return (
			check_capture(king, (t_pos){-1, -1}, board_size, board)
			|| check_capture(king, (t_pos){-1, 0}, board_size, board)
			|| check_capture(king, (t_pos){-1, 1}, board_size, board)
			|| check_capture(king, (t_pos){0, -1}, board_size, board)
			|| check_capture(king, (t_pos){0, 1}, board_size, board)
			|| check_capture(king, (t_pos){1, -1}, board_size, board)
			|| check_capture(king, (t_pos){1, 0}, board_size, board)
			|| check_capture(king, (t_pos){1, 1}, board_size, board)
			);
}

int		main(int ac, char **av)
{
	if (ac < 2)
		write(1, "\n", 1);
	else if (check_mate(ac -1, &av[1]))
		write(1, "Success\n", 8);
	else
		write(1, "Fail\n", 5);
	return (0);
}
