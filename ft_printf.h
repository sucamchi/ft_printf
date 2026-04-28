/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:35:26 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/28 10:36:07 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
void	printf_putchar(char c, int *printed);
void	printf_putnbr(int nb, int *printed);
void	printf_putstr(char *str, int *printed);
void	printf_putvoid(void *ptr, int *printed);
void	printf_putunsig(unsigned int nb, int *printed);
void	printf_puthex(unsigned int nb, int *printed);
void	printf_putupphex(unsigned int nb, int *printed);

#endif