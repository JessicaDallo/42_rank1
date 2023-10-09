/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessicadallo <jessicadallo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:08:33 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/08 18:46:46 by jessicadall      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n > 0)
	{
		if (*d != *s)
			return (*d - *s);
		d++;
		s++;
		n--;
	}
	return (0);
}
// int	main(void)
// {
// 	char x[] = "jeesica";
// 	char y[] = "jessica";
// 	printf("%d\n", ft_memcmp(x, y, 3));
// 	printf("%d\n", memcmp(x, y, 3));
// 	return (0);
// }