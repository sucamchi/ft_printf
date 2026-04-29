/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 11:01:11 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/29 11:01:12 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("Hello %s %d %x\n", "world", 42, 255);
	printf("Hello %s %d %x\n", "world", 42, 255);
}
