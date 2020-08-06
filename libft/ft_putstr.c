#include "libft.h"

char	*ft_putstr(char *str)
{
	int i;
//	char *s;

	i = 0;
//	s = ((char*)malloc(sizeof(char) * (ft_strlen(str) + 1)));
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (str);
}
