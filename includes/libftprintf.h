#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include "../libft/libft.h"

typedef struct	s_check_flags
{
	char	*print;
	int	precision;
	int	pr;
	int	width;
	int	fminus;
	int	fzero;
	int 	z;
	int	fstar;
//	size_arg
//	precision_size*/
}		t_check_flags;

int	ft_printf(const char *format, ...);
int	ft_precision(const char *format, t_check_flags *check_flags);
int	ft_zero(const char *format, t_check_flags *check_flags);

#endif
