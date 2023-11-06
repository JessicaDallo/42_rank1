/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:57:47 by marvin            #+#    #+#             */
/*   Updated: 2023/10/31 15:57:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_uns(long nb)
{
	int	i;

	i = 1;
	while (nb >= 10)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

int	ft_putuns(unsigned int nbr)
{
	if (nbr >= 10)
	{
		ft_putuns((nbr / 10));
	}
	ft_putchar((nbr % 10) + '0');
	return (ft_count_uns(nbr));
}
