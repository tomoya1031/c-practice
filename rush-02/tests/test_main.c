#include <stdio.h>
#include "../ex00/ft.h"

void	ft_putstr(char *str);

int	main ()
{
	char c[] = "abcdef";

	ft_putstr(&c[0]);
	ft_putstr(ERROR);
	ft_putstr(DICTERROR);
	return 0;
}