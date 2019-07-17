#include <unistd.h>

void	print_hex_digit(const unsigned char c)
{
	char	hex_digit[] = "0123456789abcdef";

	write(1, hex_digit + (c / 16), 1);
	write(1, hex_digit + (c % 16), 1);
}

void	print_hex(size_t max, const unsigned char *addr)
{
	size_t	i = 0;

	while (i < 16)
	{
		if (i < max)
			print_hex_digit(addr[i]);
		else
			write(1, "  ", 2);
		++i;
		if (i % 2 == 0)
			write (1, " ", 1);
	}
}

void	print_ascii(size_t max, const unsigned char *addr)
{
	size_t	i = 0;

	while (i < 16 && i < max)
	{
		if (addr[i] >= ' ' && addr[i] <= '~')
			write(1, addr + i, 1);
		else
			write(1, ".", 1);
		++i;
	}
}

void	print_memory(const void *addr, size_t size)
{
	for (size_t i = 0; i < size; i += 16)
	{
		print_hex(size - i, addr + i);
		print_ascii(size - i, addr + i);
		write(1, "\n", 1);
	}
}
