/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_putunsig.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:37:02 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/28 10:37:02 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printf_putunsig(unsigned int nb, int *printed)
{
	int	aux;

	if (nb == 4294967295)
	{
		write(1, "4294967295", 10);
		*printed += 10;
		return ;
	}
	if (nb >= 10)
		printf_putunsig(nb / 10, printed);
	aux = (nb % 10) + '0';
	write(1, &aux, 1);
	(*printed)++;
}
