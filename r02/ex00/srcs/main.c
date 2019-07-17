/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 11:43:16 by sako              #+#    #+#             */
/*   Updated: 2019/04/14 23:17:59 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle2.h"

void	ft_count_xy(char *str, int *x, int *y)
{
	int		length;
	int		i;
	int		v_count;

	i = 0;
	v_count = 0;
	length = ft_strlen(str);
	length -= 1;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			v_count++;
		i++;
	}
	*y = v_count;
	if (*y == 0)
		*x = length;
	else
		*x = length / *y;
	return ;
}

void	ft_print_result(int *check, int num, int x, int y)
{
	int		i;

	i = 0;
	if (num > 0)
	{
		while (i < num)
		{
			if (check[i] == 1)
			{
				ft_putstr(" || ");
				break ;
			}
			i++;
		}
	}
	ft_putstr("[rush-0");
	ft_putnbr(num);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
	return ;
}

int		ft_compare_result(char *str, int x, int y)
{
	int		*check;

	check = malloc(sizeof(int) * 5);
	check[0] = ft_strcmp(rush00(x, y), str);
	if (check[0] == 1)
		ft_print_result(check, 0, x, y);
	check[1] = ft_strcmp(rush01(x, y), str);
	if (check[1] == 1)
		ft_print_result(check, 1, x, y);
	check[2] = ft_strcmp(rush02(x, y), str);
	if (check[2] == 1)
		ft_print_result(check, 2, x, y);
	check[3] = ft_strcmp(rush03(x, y), str);
	if (check[3] == 1)
		ft_print_result(check, 3, x, y);
	check[4] = ft_strcmp(rush04(x, y), str);
	if (check[4] == 1)
		ft_print_result(check, 4, x, y);
	if (check[0] != 1 && check[1] != 1 && check[2] != 1 &&
		check[3] != 1 && check[4] != 1)
		ft_putstr("aucune\n");
	free(check);
	return (0);
}

int		main(void)
{
	char	*temp_str;
	int		x;
	int		y;

	x = 0;
	y = 0;
	ft_delay(1000000);
	temp_str = malloc(sizeof(char) * (BUF_SIZE + 1));
	read(0, temp_str, BUF_SIZE);
	ft_count_xy(temp_str, &x, &y);
	ft_compare_result(temp_str, x, y);
	free(temp_str);
	return (0);
}
