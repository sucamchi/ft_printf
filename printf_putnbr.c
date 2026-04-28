/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:36:51 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/28 20:03:04 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printf_putnbr(int nb, int *printed)
{
	int	result;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		*printed += 11;
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		*printed += 1;
		nb = -nb;
	}
	if (nb >= 10)
		printf_putnbr(nb / 10, printed);
	result = (nb % 10) + '0';
	write(1, &result, 1);
	(*printed)++;
}
