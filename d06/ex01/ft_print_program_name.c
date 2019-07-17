/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 11:16:35 by sako              #+#    #+#             */
/*   Updated: 2019/04/03 18:09:14 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		index;
	
	argc = 1;
	index = 0;
	while (argv[0][index] != '\0')
	{
		ft_putchar(argv[0][index]);
		index = index + 1;
	}
	ft_putchar('\n');
	return (0);
}
