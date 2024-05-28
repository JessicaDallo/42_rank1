/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 23:07:07 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/17 19:26:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// pega uma str e copia apartir de um caractere x ate o caractere y
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	i = ft_strlen(s + start);
	if (i < len)
		len = i;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == 0)
		return (0);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
// void	ft_putstr_fd(char *s, int fd)
// {
// 	while (*s)
// 	{
// 		write (fd, s, 1);
// 		s++;
// 	}
// }
// void	ft_putendl_fd(char *s, int fd)
// {
// 	ft_putstr_fd(s, fd);
// 	write (fd, "\n", 1);
// }
// int	main(void)
// {
// 	char	str[] = "jessica jessica";
// 	ft_putendl_fd(ft_substr(str, 0, 4), 1);
// 	return (0);
// }