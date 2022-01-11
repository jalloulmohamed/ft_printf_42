/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 00:48:45 by mjalloul          #+#    #+#             */
/*   Updated: 2021/11/29 15:33:56 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
int		ft_lenint(long c, char a);
void	ft_putnbr(long n);
int		ft_lenhex( unsigned int c, char b);
void	ft_puthex(unsigned int c, char b);
int		ft_putstr(char *c);
void	ft_putadr(unsigned long c);
int		ft_lenpoi(unsigned long c);

#endif
