/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:27:02 by marvin            #+#    #+#             */
/*   Updated: 2023/11/01 20:27:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_ptr(unsigned long long ptr)
{
	int	i;

	i = 0;
	while (ptr != 0)
	{
		i++;
		ptr = ptr / 16;
	}
	return (i);
}

int	ft_printptr(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_printptr(ptr / 16);
		ft_printptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar(ptr + 48);
		else
			ft_putchar(ptr - 10 + 'a');
	}
	return (ft_count_ptr(ptr));
}

int	ft_putptr(unsigned long long ptr)
{
	int	i;

	i = 0;
	if (ptr == 0)
	{
		i = i + ft_putstr("(nil)");
		return (i);
	}
	i = ft_putstr("0x");
	i += ft_printptr(ptr);
	return (i);
}
