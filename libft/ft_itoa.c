/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sothomas <sothomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 17:20:26 by sothomas          #+#    #+#             */
/*   Updated: 2021/01/11 17:24:39 by sothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int len;

	len = (n < 0 ? 1 : 0);
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char *str;
	int sign;
	int len;

	if (n == 0)
		return (ft_strdup("0"));
	sign = 0;
	len = ft_intlen(n);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (n < 0)
		sign = 1;
	str[len--] = '\0';
	while (len >= 0)
	{
		str[len] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}
