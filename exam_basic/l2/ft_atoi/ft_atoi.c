int	ft_atoi(const char *str)
{
	int		num;
	int		neg;

	num = 0;
	neg = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\n'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		num = num * 10 + (*str++ - '0');
	return (num * neg);
}
