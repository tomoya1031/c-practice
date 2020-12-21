#include <stdio.h>

void	ft_putstr(char *str);

int	main ()
{
	char c[] = "abcdef";

	ft_putstr(&c[0]);
	return 0;
}