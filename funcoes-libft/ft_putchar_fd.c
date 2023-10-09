/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <jesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:05:11 by jesilva-          #+#    #+#             */
/*   Updated: 2023/10/09 10:30:13 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
// int	main(void)
// {
// 	char c = 'j';
// 	ft_putchar_fd(c, 1);
// }