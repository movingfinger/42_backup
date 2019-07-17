int		is_space(const char c)
{
	if (c == ' ' || (c >= '\t' && c <= '\n'))
		return (1);
	return (0);
}

int		is_valid(const char c, int base)
{
	char	str1[16] = "0123456789abcdef";
	char 	str2[16] = "0123456789ABCDEF";
	
	while (base--)
		if (str1[base] == c || str2[base] == c)
			return (1);
	return (0);
}

int		convert_num(const char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int		num;
	int		neg;

	num = 0;
	neg = 1;
	while (!(is_space(*str)))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (is_valid(*str, str_base))
		num = num * str_base + convert_num(*str++);
	return (num * neg);
}
