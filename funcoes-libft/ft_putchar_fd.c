/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:05:11 by jesilva-          #+#    #+#             */
/*   Updated: 2023/10/24 18:51:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//escreve um char de acordo com o descritor desejado 
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
// int	main(void)
// {
// 	char c = 'j';
// 	ft_putchar_fd(c, 1);
// }