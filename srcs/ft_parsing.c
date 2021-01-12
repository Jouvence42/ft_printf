/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sothomas <sothomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:59:48 by sothomas          #+#    #+#             */
/*   Updated: 2021/01/12 12:19:13 by sothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"
#include "../libft/libft.h"

int	ft_precision(const char *format, t_check_flags *check_flags)
{
	int	i;
	int	size;

	i = 1;
	size = 1;
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
	return (size);
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
