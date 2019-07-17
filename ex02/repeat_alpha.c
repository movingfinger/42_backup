/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 10:49:34 by sako              #+#    #+#             */
/*   Updated: 2019/04/12 11:56:31 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_count_number(char	*str, int n)
{
	int		i;

	i = 0;
	if (str[n] >= 'A' && str[n] <= 'Z')
		i = str[n] - 'A' + 1;
	else if (str[n] >= 'a' && str[n] <= 'z')
		i = str[n] - 'a' + 1;
	return (i);
}

void	ft_print_letter(char c, int n)
{
	if (n == 0)
		write(1, &c, 1);
	else
	{
		while (n-- > 0)
			write(1, &c, 1);
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int 	count;

	i = 0;
	if (argc < 2)
		write(1, "\n", 1);
	while (argv[1][i] != '\0')
	{
		count = ft_count_number(argv[1], i);
		ft_print_letter(argv[1][i++], count);
	}
	write(1, "\n", 1);
	return (0);
}
