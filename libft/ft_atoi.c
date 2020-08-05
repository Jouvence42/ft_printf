#include "libft.h"

int	ft_atoi(const char *str, int *i)
{
	//int i;
	int result;

	//i = 1;
	result = 0;
	while (str[*i] && (str[*i] >= '0' && str[*i] <= '9'))
	{
		result = result * 10 + (str[*i] - 48);
		(*i)++;
	}
	return (result);
}
