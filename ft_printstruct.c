#include "includes/libftprintf.h"
#include "libft/libft.h"
#include <stdio.h>

void	ft_printstruct(t_check_flags *check_flags)
{
   if (check_flags->width != 0)
    {
        while (check_flags->width > 0)
        {
            ft_putchar(' ');
            (check_flags->width)--;
        }
    } 
    else if (check_flags->pr != 0)
    {
        while (check_flags->pr > 0)
        {
            ft_putchar('0');
            (check_flags->pr)--;
        }
    }
}
