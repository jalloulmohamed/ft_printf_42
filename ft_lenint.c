/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lennum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 00:42:19 by mjalloul          #+#    #+#             */
/*   Updated: 2021/11/27 01:13:23 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_lenint(long c, char a)
{
	int	i;

	i = 0;
	if (a == 'x' || a == 'X')
		return (ft_lenhex(c, a));
	if (a == 'c')
		return (ft_putchar((char)c));
	if (a == 'u' && c < 0)
		c = 4294967296 + c;
	ft_putnbr(c);
	if (c == 0 || c < 0)
		i++;
	while (c != 0)
	{
		c = c / 10;
		i++;
	}
	return (i);
}
