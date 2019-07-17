/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 00:51:35 by sako              #+#    #+#             */
/*   Updated: 2019/04/05 13:52:29 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_time_convert(int *hour, char *t)
{
	if (*hour > 24)
		*hour %= 24;
	if ((*hour > 0) && (*hour < 12))
		*t = 'A';
	else if ((*hour == 0) || (*hour == 24))
	{
		*t = 'A';
		*hour = 12;
	}
	else if (*hour == 12)
		*t = 'P';
	else
	{
		*t = 'P';
		*hour -= 12;
	}
}

void	ft_takes_place(int hour)
{
	int		hour_a;
	int		hour_b;
	char	time_a;
	char	time_b;

	hour_a = hour;
	hour_b = hour + 1;
	time_a = 'A';
	time_b = 'P';
	ft_time_convert(&hour_a, &time_a);
	ft_time_convert(&hour_b, &time_b);
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %c.M. AND %d.00 %c.M.\n", hour_a, time_a, hour_b, time_b);
}
