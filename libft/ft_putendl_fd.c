/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:50:20 by jesilva-          #+#    #+#             */
/*   Updated: 2023/10/24 15:53:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//escreve uma string e uma quebra de linha de acordo com o descritor desejado 
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write (fd, "\n", 1);
}
// int	main(void)
// {
// 	char c[] = "Hello word";
// 	ft_putstr_fd(c, 1);
// 	ft_putendl_fd(c, 1);
// 	return (0);
// }