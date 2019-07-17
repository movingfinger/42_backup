/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_words.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 15:10:46 by sako              #+#    #+#             */
/*   Updated: 2019/04/12 15:17:27 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_last_words(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && (str[i + 1] >= 33 && str[i + 1] < 126))
			j = i + 1;
		i++;
	}

	while (str[j] != '\0')
	{
		if (str[j] >= 33 && str[j] <= 126)
			write(1, &str[j], 1);
		j++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_check_last_words(argv[1]);
	write(1, "\n", 1);
}
