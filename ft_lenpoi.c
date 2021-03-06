/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lenpoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 01:13:46 by mjalloul          #+#    #+#             */
/*   Updated: 2021/11/27 01:18:07 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_lenpoi(unsigned long c)
{
	int		i;
	char	j[64];
	char	*a;

	i = 0;
	a = "0123456789abcdef";
	i += ft_putstr("0x");
	ft_putadr(c);
	if (c == 0)
		i++;
	while (c != 0)
	{
		j[i++] = a[c % 16];
		c = c / 16;
	}
	return (i);
}
