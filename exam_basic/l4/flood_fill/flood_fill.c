#include "flood_fill.h"

void	do_fill(char **tab, char empty, t_point size, int x, int y)
{
	if (x < 0 || y < 0)
		return ;
	if (x >= size.x || y >= size.y)
		return ;
	if (tab[y][x] != empty)
		return ;
	tab[y][x] = 'F';
	do_fill(tab, empty, size, x + 1, y);
	do_fill(tab, empty, size, x - 1, y);
	do_fill(tab, empty, size, x, y + 1);
	do_fill(tab, empty, size, x, y - 1);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	do_fill(tab, tab[begin.y][begin.x], size, begin.x, begin.y);
}
