int		max(int* tab, unsigned int len)
{
	int		max = -2147483648;

	for (unsigned int i = 0; i < len; i++)
		if (max < tab[i])
			max = tab[i];
	return (max);
}

// did not implement about empty array case