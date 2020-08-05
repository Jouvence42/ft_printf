#include "libft.h"

int	ft_intlen(int i)
{
	int j;

	j = 0;
	while (i > 0)
	{
		i = i / 10;
		j++;
	}
	return (j);
}
