/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:36:06 by marvin            #+#    #+#             */
/*   Updated: 2023/11/01 21:36:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_nbr(long int nb)
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
