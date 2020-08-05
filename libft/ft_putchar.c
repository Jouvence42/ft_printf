#include "libft.h"

void	ft_putchar(char c)
{
//	char *tab;

//	tab = (char*)malloc(sizeof(char) * 2);
//	tab[0] = c;
//	tab[1] = '\0';
	write(1, &c, 1);

//	return (tab);
}
