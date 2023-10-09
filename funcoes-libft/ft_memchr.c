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
#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned int	i;

	i = 0;
	s = (unsigned char *)str;
	c = (char *)c;
	while (*s != c && n)
	{
		s++;
		n--;
	}
	if(n)
		return ((void *)s);
	else
		return (NULL);

	return (s);
}
// int	main(void)
// {
// 	const char str[] = "jessica gosta de arroz";
// 	const char ch = 'i';


// 	printf("%s\n", (char *)ft_memchr(str, ch, 4));
// 	printf("%s\n", (char *)memchr(str, ch, 4));
// 	return (0);
// }