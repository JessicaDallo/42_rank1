/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:55:04 by marvin            #+#    #+#             */
/*   Updated: 2023/10/31 16:55:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_hex(unsigned int nbr)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		i++;
		nbr = nbr / 16;
	}
	return (i);
}

void	ft_printhex(unsigned int nbr, char type)
{
	if (nbr >= 16)
	{
		ft_puthexa(nbr / 16, type);
		ft_puthexa(nbr % 16, type);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar((nbr + 48));
		else
		{
			if (type == 'x')
				ft_putchar((nbr - 10 + 'a'));
			if (type == 'X')
				ft_putchar((nbr - 10 + 'A'));
		}
	}
}

int	ft_puthexa(unsigned int nbr, char type)
{
	int	i;

	if (nbr == 0)
		return (write (1, "0", 1));
	else
		ft_printhex(nbr, type);
	i = ft_count_hex(nbr);
	return (i);
}
