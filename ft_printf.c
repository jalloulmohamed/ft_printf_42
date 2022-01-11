/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pri.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:57:35 by mjalloul          #+#    #+#             */
/*   Updated: 2021/11/27 01:43:31 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		j;

	j = 0;
	va_start (args, s);
	while (*s != '\0')
	{
		if (*s == '%')
		{
			s++;
			if (*s == '%')
				j += ft_putchar('%');
			else if (*s == 'd' || *s == 'u' || *s == 'i'
				|| *s == 'c' || *s == 'x' || *s == 'X')
				j += ft_lenint(va_arg(args, int),*s);
			else if (*s == 's')
				j += ft_putstr(va_arg(args, void *));
			else if (*s == 'p')
				j += ft_lenpoi(va_arg(args, unsigned long));
		}
		else
			j += ft_putchar(*s);
		s++;
	}
	return (j);
}
