

#include "includes/libftprintf.h"
#include "libft/libft.h"
#include <stdio.h>

void	ft_init_struct(t_check_flags *check_flags)
{
	check_flags->print = NULL;
	check_flags->precision = 0;
	check_flags->pr = 0;
	check_flags->width = 0;
	check_flags->fminus = 0;
	check_flags->fzero = 0;
	check_flags->z = 0;
	check_flags->fstar = 0;
}

/*
int	ft_flags(const char *format, va_list params, t_check_flags *check_flags)
{
	int i;
	int size;

	i = 1;
	size = 0;
	if (*format == 'd')
		size = 1;
	if (*format == '.')
	{
		check_flags->pr = 1;
		size = ft_precision(format, check_flags);
	}
	if (*format == '0')
	{
		check_flags->z = 1;
		size = ft_zero(format, check_flags);
	}
//	printf("size dans flags = %d\n", size);
	return (size);
}


void	ft_pars(const char *format, va_list params, t_check_flags *check_flags)
{
	while ((*format == '.' || *format == '-' || *format == '*'
		|| (*format >= '0' && *format <= '9')) && *format)
		format++;
	if (*format == '%')
		check_flags->print = ft_putchar('%');
	if (*format == 'c')
		check_flags->print = ft_putchar((char)va_arg(params, int));
	if (*format == 's')
		check_flags->print = ft_putstr((char*)va_arg(params, char*));
	if (*format == 'd' || *format == 'i')
		check_flags->print = ft_itoa((int)va_arg(params, char*));
	if (*format == 'x')
		check_flags->print = ft_itoabase;
	if (*format == 'X')
		check_flags->print = ft_itoabase;
	ft_putstrprint(check_flags->print);
//	printf("%s\n", check_flags->print);
}
*/

int	ft_flags(const char *format, va_list params, t_check_flags *check_flags)
{
	int i;

	i = 0;
	if (format[i] >= '1' && format[i] <= '9')
	{
		check_flags->width = ft_atoi(format, &i);
		return (check_flags->width);
	}
	if (format[i] == '.' && format[i + 1] != 'c')
	{
		while (format[i + 1] >= '1' && format[i + 1] <= '9')
		{
			check_flags->pr = ft_atoi(&format[i + 1], &i);
		//	printf("1 %c\n", format[i + 1]);
			i++;
		//	printf("2 %c\n", format[i + 1]);
		}
		return (check_flags->pr);
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list		params;
	int		i;
	int		place;
	t_check_flags	*check_flags;
	int		temp;
	int 	j;

	va_start(params, format);
	i = 0;
	place = 0;
	check_flags = (t_check_flags*)(malloc(sizeof(t_check_flags)));
	ft_init_struct(check_flags);	
	temp = 1;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (ft_flags(&format[i], params, check_flags) != 0)
			{
//				j = ft_intlen((int)va_arg(params, int));
				j = ft_intlen(check_flags->pr);
				while (temp != 0)
				{
					temp = ft_flags(&format[i], params, check_flags);
					temp = 0;
					i++;
				}
				temp = 1;
				ft_printstruct(check_flags, j);
				i = i + (check_flags->pr);
			}
//			else
//			{
				if (format[i] == 'c')
					ft_putchar((char)va_arg(params, int));
				if (format[i] == 'd' || format[i] == 'i')
					ft_putstr(ft_itoa((int)va_arg(params, char*)));
				if (format[i] == 's')
					ft_putstr((char*)va_arg(params, char*));
				i++;
//			}
		}
		write(1, &format[i], 1);
		i++;
	}
	va_end(params);
	return (0);
}
