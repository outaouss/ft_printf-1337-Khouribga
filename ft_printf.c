/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outaouss <outaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:00:25 by outaouss          #+#    #+#             */
/*   Updated: 2025/11/06 22:25:18 by outaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	format_checker(va_list args, char format)
{
	int	printed_count;

	printed_count = 0;
	if (format == 'c')
		printed_count += ft_putchar(va_arg(args, int));
	else if (format == 's')
		printed_count += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		printed_count += ft_print_ptr((unsigned long)va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		printed_count += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		printed_count += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		printed_count += ft_print_hex(va_arg(args, int), format);
	else if (format == '%')
		printed_count += ft_putchar('%');
	else
	{
		printed_count += ft_putchar('%');
		printed_count += ft_putchar(format);
	}
	return (printed_count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		printed_count;

	i = 0;
	printed_count = 0;
	va_start(args, format);
	if (!format || write(1, "", 0) < 0)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			i++;
			printed_count += format_checker(args, format[i]);
			i++;
		}
		else
			printed_count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (printed_count);
}
