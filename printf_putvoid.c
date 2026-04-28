/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_putvoid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:37:12 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/28 10:37:13 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	turn_result(char *buffer, int cont)
{
	int		start;
	int		end;
	char	aux;

	start = 2;
	end = cont - 1;
	while (start < end)
	{
		aux = buffer[start];
		buffer[start] = buffer[end];
		buffer[end] = aux;
		start++;
		end--;
	}
}

static void	hex_converter(char *buffer, unsigned long ptr)
{
	char	*hex_digits;
	int		cont;

	hex_digits = "0123456789abcdef";
	cont = 2;
	if (ptr == 0)
		buffer[cont++] = '0';
	buffer[0] = '0';
	buffer[1] = 'x';
	while (ptr > 0)
	{
		buffer[cont++] = hex_digits[ptr % 16];
		ptr /= 16;
	}
	buffer[cont] = '\0';
	turn_result(buffer, cont);
}

void	printf_putvoid(void *ptr, int *printed)
{
	char	buffer[18];

	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		*printed += 5;
	}
	else
	{
		hex_converter(buffer, (unsigned long)ptr);
		printf_putstr(buffer, printed);
	}
}
