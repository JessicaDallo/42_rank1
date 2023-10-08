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
	if (c == '\0')
	{
		return (NULL);
	}
	while (s[i] != '\0' || i < n)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (s);
}
/*int	main(void)
{
	const char str[] = "jessica gosta de arroz";
	const char ch = 'i';

	printf("%s\n", (char *)memchr(str, ch, 7));
	printf("%s\n", (char *)ft_memchr(str, ch, 7));
	return (0);
}*/