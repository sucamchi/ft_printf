/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_putupphex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:37:07 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/28 20:04:06 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"

static void	turn_result(char *buffer, int count)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	end = count - 1;
	while (start < end)
	{
		temp = buffer[start];
		buffer[start] = buffer[end];
		buffer[end] = temp;
		start++;
		end--;
	}
}

static void	hex_converter(char *buffer, unsigned int nb)
{
	char	*hex_digits;
	int		count;

	hex_digits = "0123456789ABCDEF";
	count = 0;
	if (nb == 0)
		buffer[count++] = '0';
	while (nb > 0)
	{
		buffer[count++] = hex_digits[nb % 16];
		nb /= 16;
	}
	buffer[count] = '\0';
	turn_result(buffer, count);
}

void	printf_putupphex(unsigned int nb, int *printed)
{
	char	buffer[16];

	hex_converter(buffer, nb);
	printf_putstr(buffer, printed);
}
