/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:10:19 by marvin            #+#    #+#             */
/*   Updated: 2023/10/31 15:10:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putint(int nbr)
{
	long	nb;
	int		i;

	nb = nbr;
	i = ft_count_nbr(nb);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putint(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
	return (i);
}
// int main ()
// {
	//char * nbr = "ff";
	//int i;

	//i = 0;
	//i = ft_putint_fd(nbr, 1);
	//printf("\n %d isso vai ser o retorno", i);
	//printf("\n teste \n");
// 	printf("\n %x teste hexa \n", 0xFF );

// 	return 0;
// }