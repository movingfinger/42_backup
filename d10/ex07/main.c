/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 22:36:31 by sako              #+#    #+#             */
/*   Updated: 2019/04/09 23:34:48 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_wordtab(char **tab);

int main(int argc, char** argv)
{
	if (argc < 1)
		return 0;
	ft_sort_wordtab(argv + 1);
	for (char** iter = argv + 1; *iter != 0; iter++)
		printf("%s,", *iter);
}
