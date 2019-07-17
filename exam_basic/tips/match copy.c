/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svorkapi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 10:15:46 by svorkapi          #+#    #+#             */
/*   Updated: 2019/04/07 18:11:50 by svorkapi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 != '\0' && *s2 == '*')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	else if (*s1 == '\0' && *s2 == '*')
		return (match(s1, s2 + 1));
	else if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		return (match(s1 + 1, s2 + 1));
	else
		return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int		r;
	char	*x;
	char	*y;

	x = "srkica";
	y = "*ica";
	r = match(x, y);
	ft_putchar(r + '0');
	ft_putchar('\n');
	return (0);
}
