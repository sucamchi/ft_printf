/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:36:57 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/29 11:03:13 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *printed)
{
	unsigned int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		*printed += 6;
		return ;
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
		(*printed)++;
	}
}
