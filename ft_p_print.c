/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outaouss <outaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 23:07:33 by outaouss          #+#    #+#             */
/*   Updated: 2025/11/05 00:28:20 by outaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ptr_check(unsigned long ptr, int *total)
{
	char	result[17];
	char	*hex;
	int		i;

	i = 0;
	hex = "0123456789abcdef";
	while (ptr >= 16)
	{
		result[i] = hex[ptr % 16];
		ptr = ptr / 16;
		i++;
	}
	if (ptr < 16)
		result[i] = hex[ptr];
	i++;
	result[i] = '\0';
	i--;
	while (i >= 0)
	{
		*total += ft_putchar(result[i]);
		i--;
	}
}

int	ft_print_ptr(unsigned long ptr)
{
	int	total;

	if (ptr == 0)
	{
		total += ft_putstr("(nil)");
		return (total);
	}
	total = 0;
	total += ft_putstr("0x");
	ptr_check(ptr, &total);
	return (total);
}
