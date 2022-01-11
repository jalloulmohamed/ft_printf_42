/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 01:19:47 by mjalloul          #+#    #+#             */
/*   Updated: 2021/11/27 01:38:50 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_puthex(unsigned int c, char b)
{
	char	*a;
	char	*m;

	a = "0123456789abcdef";
	m = "0123456789ABCDEF";
	if (c <= 15)
	{
		if (b == 'x')
			ft_putchar(a[c]);
		else
			ft_putchar(m[c]);
	}
	else
	{
		ft_puthex(c / 16, b);
		ft_puthex(c % 16, b);
	}
}
