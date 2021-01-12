/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sothomas <sothomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 09:47:48 by sothomas          #+#    #+#             */
/*   Updated: 2021/01/12 14:41:52 by sothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"
#include <stdio.h>

int main()
{
//	char	str[] = "Bene";
//	char	c = 'B';
	int	d = 0;

	printf("printf : Coucou %d toi\n", d);
	ft_printf("ttmine : Coucou %d toi\n", d);
	return (0);
}
