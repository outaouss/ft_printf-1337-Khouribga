/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outaouss <outaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:06:04 by outaouss          #+#    #+#             */
/*   Updated: 2025/11/05 00:27:31 by outaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_print_ptr(unsigned long ptr);
int	ft_printf(const char *format, ...);
int	ft_putnbr(int nb);
int	ft_print_unsigned(unsigned int nb);
int	ft_print_hex(unsigned int n, const char f);

#endif