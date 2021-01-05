#include "includes/libftprintf.h"
#include "libft/libft.h"

int	ft_precision(const char *format, t_check_flags *check_flags)
{
	int	i;
	int	size;

	i = 1;
	size = 1;
//	printf("format = %s\n", format);
	while (format[i] >= '0' && format[i] <= '9')
	{
		size++;
		i++;
	}
	i = 1;
	if (*format && (ft_isdigit(format[i]) == 1))
	{
		check_flags->precision = ft_atoi(format, &i);
		while (ft_isdigit(format[i] == 1))
			i++;
	}
//	printf("d = %s\n", check_flag->print);
//	printf("atoi = %d\n", check_flags->precision);
//	printf("place dans precision = %d\n", size);
	return (size);
//	printf("precision = %d\n", check_flags->precision);
}

int	ft_zero(const char *format, t_check_flags *check_flags)
{
	int i;
	int size;

	i = 1;
	size = 0;
	while (format[i] >= '0' && format[i] <= '9')
	{
		size++;
		i++;
	}
	i = 1;
	if (*format && (ft_isdigit(format[i]) == 1))
	{
		check_flags->fzero = ft_atoi(format, &i);
		while (ft_isdigit(format[i]) == 1)
			i++;
	}
	return (size);
}