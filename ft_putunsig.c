/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsig.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:37:02 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/28 20:47:35 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsig(unsigned int nb, int *printed)
{
	int				result;
	unsigned long	lnb;

	lnb = nb;
	if (lnb >= 10)
		ft_putunsig(lnb / 10, printed);
	result = (lnb % 10) + '0';
	write(1, &result, 1);
	(*printed)++;
}
