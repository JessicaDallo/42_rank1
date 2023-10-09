/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <jesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:51:31 by jesilva-          #+#    #+#             */
/*   Updated: 2023/10/09 10:09:02 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write (fd, s, 1);
		s++;
	}
}
// int	main(void)
// {
// 	char c[] = "Hello word";
// 	//ft_putstr_fd(c, 1);
// 	ft_putstr_fd(c, 1);
// 	return (0);
// }