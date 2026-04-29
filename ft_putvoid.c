/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:37:12 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/29 16:11:18 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	invert_result(char *buffer, int index)
{
	int		start;
	int		end;
	char	tmp;

	start = 2;
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

static void	hex_converter(char *buffer, unsigned long ptr)
{
	char	*hex_digits;
	int		i;

	hex_digits = "0123456789abcdef";
	i = 2;
	buffer[0] = '0';
	buffer[1] = 'x';
	while (ptr > 0)
	{
		buffer[i++] = hex_digits[ptr % 16];
		ptr /= 16;
	}
	buffer[i] = '\0';
	invert_result(buffer, i);
}

void	ft_putvoid(void *ptr, int *printed)
{
	char	buffer[19];

	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		*printed += 5;
	}
	else
	{
		hex_converter(buffer, (unsigned long)ptr);
		ft_putstr(buffer, printed);
	}
}
