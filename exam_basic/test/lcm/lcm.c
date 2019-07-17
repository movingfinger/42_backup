unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int	n = 1;
	unsigned int	i = 2;

	if (!a || !b)
		return (0);
	while (!a|| !b)
	{
		if (a % i == 0 && b % i == 0)
		{
			a /= i;
			b /= i;
			n *= i;
		}
		else
			i++;
	}
	return (n);
}
