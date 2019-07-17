/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 09:14:08 by sako              #+#    #+#             */
/*   Updated: 2019/04/09 22:08:29 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str);
int		ft_do_op(char **tab, int (*f)(int, int));
int		ft_plus(int n1, int n2);
int		ft_minus(int n1, int n2);
int		ft_multiply(int	n1, int n2);
int		ft_divide(int n1, int n2);
int		ft_mod(int n1, int n2);
void	ft_putnbr(int n);

char	ft_check_operator(char *str)
{
	char c;

	if (str[0] == '+' || str[0] == '-' ||
			str[0] == '*' || str[0] == '/' || str[0] == '%')
		c = '%';
	else
		c = 'i';
	return (c);
}

int		(*ft_select_operator(char **argv))(int, int)
{
	int		(*f)(int, int);

	(void)(f);
	if (argv[1][0] == '+')
		f = &ft_plus;
	if (argv[1][0] == '-')
		f = &ft_minus;
	if (argv[1][0] == '*')
		f = &ft_multiply;
	if (argv[1][0] == '/' && ft_atoi(argv[2]) == 0)
	{
		write(1, "division by zero\n", 17);
		f = NULL;
	}
	else if (argv[1][0] == '/' && ft_atoi(argv[2]) != 0)
		f = &ft_divide;
	if (argv[1][0] == '%' && ft_atoi(argv[2]) == 0)
	{
		write(1, "modulo by zero\n", 15);
		f = NULL;
	}
	else if (argv[1][0] == '%' && ft_atoi(argv[2]) != 0)
		f = &ft_mod;
	return (f);
}

int		ft_do_op(char **tab, int (*f)(int, int))
{
	int		n1;
	int		n2;
	char	op;
	int		result;

	n1 = ft_atoi(tab[0]);
	op = tab[1][0];
	n2 = ft_atoi(tab[2]);
	result = f(n1, n2);
	return (result);
}

int		ft_test(int argc, char **argv)
{
	int	(*f)(int, int);
	int result;

	(void)argc;
	(void)argv;
	f = &ft_plus;
	result = 0;
	if (argc < 4)
		write(1, "", 1);
	else
	{
		if (ft_check_operator(argv[1]) == 'i')
			write(1, "0\n", 2);
		else
		{
			f = ft_select_operator(argv);
			if (f != NULL)
				result = ft_do_op(argv, f);
			else
				return (0);
			ft_putnbr(result);
			write(1, "\n", 1);
		}
	}
	return (0);
}
