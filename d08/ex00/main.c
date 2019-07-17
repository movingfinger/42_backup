#include <stdio.h>

char** ft_split_whitespaces(char* str);

int		main(void)
{
	char** res;
	for (res = ft_split_whitespaces("asdf qwerty zxcv"); *res != 0; res++)
		printf("'%s',", *res);
	printf("\n");
	for (res = ft_split_whitespaces("s1   s2 \t\n\t\ns3"); *res != 0; res++)
		printf("'%s',", *res);
	printf("\n");
	return (0);
}
