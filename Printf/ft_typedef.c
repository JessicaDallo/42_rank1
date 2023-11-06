/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:05:29 by marvin            #+#    #+#             */
/*   Updated: 2023/10/31 15:05:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_typedef(va_list list, const char type)
{
	if ('c' == type)
		return (ft_putchar(va_arg(list, int)));
	else if ('s' == type)
		return (ft_putstr(va_arg(list, char *)));
	else if ('p' == type)
		return (ft_putptr(va_arg(list, unsigned long)));
	else if ('d' == type || 'i' == type)
		return (ft_putint(va_arg(list, int)));
	else if ('u' == type)
		return (ft_putuns(va_arg(list, unsigned long int)));
	else if ('x' == type)
		return (ft_puthexa(va_arg(list, unsigned int), type));
	else if ('X' == type)
		return (ft_puthexa(va_arg(list, unsigned int), type));
	else if ('%')
		return (ft_putchar('%'));
	return (0);
}
