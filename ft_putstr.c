/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:36:57 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/28 20:14:25 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *printed)
{
	unsigned int	count;

	count = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		*printed += 6;
		return ;
	}
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
		(*printed)++;
	}
}
