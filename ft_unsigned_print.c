/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_print.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outaouss <outaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:12:09 by outaouss          #+#    #+#             */
/*   Updated: 2025/11/05 00:23:11 by outaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nb)
{
	int		count;

	count = 0;
	if (nb >= 10)
	{
		count += ft_print_unsigned(nb / 10);
	}
	count += ft_putchar((nb % 10) + '0');
	return (count);
}
