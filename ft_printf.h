/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:35:26 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/28 20:15:03 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *fmt, ...);
void	ft_putchar(char c, int *printed);
void	ft_putnbr(int nb, int *printed);
void	ft_putstr(char *str, int *printed);
void	ft_putvoid(void *ptr, int *printed);
void	ft_putunsig(unsigned int nb, int *printed);
void	ft_puthex(unsigned int nb, int *printed);
void	ft_putupphex(unsigned int nb, int *printed);

#endif