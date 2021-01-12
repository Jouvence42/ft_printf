/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstruct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sothomas <sothomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:00:10 by sothomas          #+#    #+#             */
/*   Updated: 2021/01/12 12:19:44 by sothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"
#include "../libft/libft.h"

void	ft_printstruct(t_check_flags *check_flags, int j)
{
   if (check_flags->width != 0)
    {
        while (check_flags->width > j)
        {
            ft_putchar(' ');
            (check_flags->width)--;
        }
    } 
    else if (check_flags->pr != 0)
    {
        while (check_flags->pr > j)
        {
            ft_putchar('0');
            (check_flags->pr)--;
        }
    }
}
