/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_puthex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:36:45 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/28 10:36:46 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	turn_result(char *buffer, int cont)
{
	int		start;
	int		end;
	char	aux;

	start = 0;
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

static void	hex_converter(char *buffer, unsigned int nb)
{
	char	*hex_digits;
	int		cont;

	hex_digits = "0123456789abcdef";
	cont = 0;
	if (nb == 0)
		buffer[cont++] = '0';
	while (nb > 0)
	{
		buffer[cont++] = hex_digits[nb % 16];
		nb /= 16;
	}
	buffer[cont] = '\0';
	turn_result(buffer, cont);
}

void	printf_puthex(unsigned int nb, int *printed)
{
	char	buffer[16];

	hex_converter(buffer, nb);
	printf_putstr(buffer, printed);
}
