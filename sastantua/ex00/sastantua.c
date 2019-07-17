/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 08:39:47 by sako              #+#    #+#             */
/*   Updated: 2019/03/31 23:12:31 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		cal_space(int floor)
{
	int d;
	int step;
	int basic;
	int i;

	d = 0;
	i = floor + 1;
	basic = 0;
	while (i > 0)
	{
		basic+= i;
		if (i <= 2)
			step = 0;
		else
			step = 2 + (i - 1) / 2 + (i - 1) % 2;
		i--;
		basic += step;
		//printf("%d - %d\n", i, step);
	}
	basic--;
	printf("floor: %d, basic:  %d\n", floor, basic);
	return basic;
}

void	display(int floor, int space)
{
	int h;
	int str;
	int i;
	int space_temp;
	int t;
	int temp;

	h = floor + 2;
	t = floor - 1;
	temp = 2;
	while (0 < t--)
		temp *= 2;
	str =  (floor - 1) * 8 + temp -1;
	printf("floor: %d - star : %d\n", floor, str);
	while (h > 0)
	{
		space_temp = space;
		while (0 < space_temp--)
			ft_putchar(' ');
		ft_putchar('/');
		i = 0;
		while (str > i++)
			ft_putchar('*');
		str += 2;
		ft_putchar('\\');
		ft_putchar('\n');
		h--;
		space--;
	}
}

void	display_whole(int size)
{
	int space;
	int i;
	int step;

	i = 0;
	step = size;
	space = cal_space(step);
	while (i++ < size)
	{
		display(i, space);
		step--;
		//printf("%d - %d\n", i, space);
		space = space - ((i + 1) + 2 + i / 2 + i % 2);
		//printf("%d - %d\n", i, space);
	}
}


int		main(void)
{
	display_whole(5);
	
	//cal_space(5);
	//cal_space(4);
	//cal_space(3);
	//cal_space(2);
	//cal_space(1);	
	return (0);
}
