#include "includes/libftprintf.h"
#include <stdio.h>

int main()
{
//	char	str[] = "Bene";
	char	c = 'B';
//	int	d = 42;

//	printf("printf : Coucou %c toi\n", c);
	ft_printf("mine Coucou %.12c toi\n", c);
	return (0);
}
