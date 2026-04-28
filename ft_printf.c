/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:35:37 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/28 10:35:39 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	select_type(char s, va_list args, int *printed)
{
	if (s == 'c')
		printf_putchar((char)va_arg(args, int), printed);
	else if (s == 's')
		printf_putstr(va_arg(args, char *), printed);
	else if (s == 'p')
		printf_putvoid(va_arg(args, void *), printed);
	else if (s == 'i' || s == 'd')
		printf_putnbr(va_arg(args, int), printed);
	else if (s == 'u')
		printf_putunsig(va_arg(args, unsigned int), printed);
	else if (s == 'x')
		printf_puthex(va_arg(args, unsigned int), printed);
	else if (s == 'X')
		printf_putupphex(va_arg(args, unsigned int), printed);
	else if (s == '%')
		printf_putchar('%', printed);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		cont;
	int		printed;

	va_start(args, str);
	cont = 0;
	printed = 0;
	while (str[cont])
	{
		if (str[cont] == '%' && str[cont + 1] != '\0')
		{
			cont++;
			select_type(str[cont], args, &printed);
		}
		else
			printf_putchar(str[cont], &printed);
		cont++;
	}
	va_end(args);
	return (printed);
}
