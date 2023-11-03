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

int	ft_puthexa(unsigned int nbr, char type)
{
	unsigned long	nb;
	int				i;

	nb = nbr;
	i = ft_count_nbr(nb);
	if (nb == 0)
		return (write (1, "0", 1));
	if (nb > 16)
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
	return (i);
}
