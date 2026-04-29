/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:36:45 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/29 11:04:09 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	turn_result(char *buffer, int count)
{
	int		start;
	int		end;
	char	aux;

	start = 0;
	end = count - 1;
	while (start < end)
	{
		aux = buffer[start];
		buffer[start] = buffer[end];
		buffer[end] = aux;
		start++;
		end--;
	}
}

static void	hex_converter(char *buffer, unsigned int nb, char *hex_digits)
{
	int	i;

	i = 0;
	if (nb == 0)
		buffer[i++] = '0';
	while (nb > 0)
	{
		buffer[i++] = hex_digits[nb % 16];
		nb /= 16;
	}
	buffer[i] = '\0';
	turn_result(buffer, i);
}

void	ft_puthex(unsigned int nb, int *printed)
{
	char	buffer[16];

	hex_converter(buffer, nb, "0123456789abcdef");
	ft_putstr(buffer, printed);
}

void	ft_putupphex(unsigned int nb, int *printed)
{
	char	buffer[16];

	hex_converter(buffer, nb, "0123456789ABCDEF");
	ft_putstr(buffer, printed);
}
