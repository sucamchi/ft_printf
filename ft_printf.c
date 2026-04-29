/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:35:37 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/29 13:34:52 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	select_type(char s, va_list args, int *printed)
{
	if (s == 'c')
		ft_putchar((char)va_arg(args, int), printed);
	else if (s == 's')
		ft_putstr(va_arg(args, char *), printed);
	else if (s == 'p')
		ft_putvoid(va_arg(args, void *), printed);
	else if (s == 'i' || s == 'd')
		ft_putnbr(va_arg(args, int), printed);
	else if (s == 'u')
		ft_putunsig(va_arg(args, unsigned int), printed);
	else if (s == 'x')
		ft_puthex(va_arg(args, unsigned int), printed);
	else if (s == 'X')
		ft_putupphex(va_arg(args, unsigned int), printed);
	else if (s == '%')
		ft_putchar('%', printed);
}

int	ft_printf(char const *fmt, ...)
{
	va_list	args;
	int		i;
	int		printed;

	va_start(args, fmt);
	i = 0;
	printed = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%' && fmt[i + 1] != '\0')
		{
			i++;
			select_type(fmt[i], args, &printed);
		}
		else
			ft_putchar(fmt[i], &printed);
		i++;
	}
	va_end(args);
	return (printed);
}
