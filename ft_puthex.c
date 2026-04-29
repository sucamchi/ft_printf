/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:36:45 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/29 15:13:47 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	invert_result(char *buffer, int index)
{
	int		start;
	int		end;
	char	tmp;

	start = 0;
	end = index - 1;
	while (start < end)
	{
		tmp = buffer[start];
		buffer[start] = buffer[end];
		buffer[end] = tmp;
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
	invert_result(buffer, i);
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
