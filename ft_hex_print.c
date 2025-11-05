/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outaouss <outaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:25:51 by outaouss          #+#    #+#             */
/*   Updated: 2025/11/05 00:28:07 by outaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, const char format)
{
	char		result[17];
	const char	*hex_base;
	int			i;
	int			count;

	if (format == 'x')
		hex_base = "0123456789abcdef";
	else if (format == 'X')
		hex_base = "0123456789ABCDEF";
	i = 0;
	count = 0;
	if (n == 0)
		return (ft_putchar('0'));
	while (n > 0)
	{
		result[i++] = hex_base[n % 16];
		n /= 16;
	}
	result[i--] = '\0';
	while (i >= 0)
	{
		count += ft_putchar(result[i]);
		i--;
	}
	return (count);
}
