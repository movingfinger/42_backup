int		is_space(char c)
{
	if (c == ' ' || (c >= '\t' && c <= '\n'))
		return (1);
	return (0);
}

int		is_valid(char c, int base)
{
	char 	hexL[16] = "0123456789abcdef";
	char	hexU[16] = "0123456789ABCDEF";

	while (base-- > 0)
	{
		if (c == hexL[base] || c == hexU[base])
			return (1);
	}
	return (0);
}

int		convert_num(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int		num = 0;
	int		neg = 1;

	while (is_space(*str))
		str++;
	if (*str == '-')
		neg = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (is_valid(*str, str_base))
		num = num * str_base + convert_num(*str++);
	return (num * neg);
}
