/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 12:02:31 by sako              #+#    #+#             */
/*   Updated: 2019/04/03 22:45:31 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_bubblesort(char **str)
{
	int		length;
	int		index1;
	int		index2;
	char	*temp;

	length = 0;
	index1 = 1;
	index2 = 1;
	while (str[length] != '\0')
		length++;
	while (index1 + 1 < length)
	{
		while (index2 < length - 1)
		{
			if (ft_strcmp(str[index2], str[index2 + 1]) > 0)
			{
				temp = str[index2];
				str[index2] = str[index2 + 1];
				str[index2 + 1] = temp;
			}
			index2++;
		}
		index1 = index1 + 1;
		index2 = 1;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	argc = 1;
	i = 1;
	ft_bubblesort(argv);
	while (argv[i] != '\0')
	{
		j = 0;
		while (argv[i][j] != '\0')
			ft_putchar(argv[i][j++]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
