/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <jesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:05:11 by jesilva-          #+#    #+#             */
/*   Updated: 2023/10/27 11:25:07 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//escreve um char de acordo com o descritor desejado 
void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0 && fd <= 2)
		write (fd, &c, 1);
	return ;
}
// int	main(void)
// {
// 	char c = 'J';
// 	ft_putchar_fd(c, 2);
// }
