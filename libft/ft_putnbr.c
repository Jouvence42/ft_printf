#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr(214748364);
		n = 8;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
		ft_putnbr(n);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + 48);
}
