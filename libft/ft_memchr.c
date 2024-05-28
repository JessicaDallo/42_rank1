/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: jessicadallo <jessicadallo@student.42.f    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/10/06 17:23:33 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/06 17:23:33 by jessicadall      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// procura por um caractere em uma string
void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	c = (unsigned char)c;
	while (n && *s != c)
	{
		s++;
		n--;
	}
	if (n)
		return ((void *)s);
	else
		return (NULL);
}
// int	main(void)
// {
// 	const char str[] = "jessica gosta de arroz";
// 	const char ch = 'o';

// 	printf("%s\n", (char *)ft_memchr(str, ch, 22));
// 	printf("%s\n", (char *)memchr(str, ch, 20));
// 	return (0);
// }