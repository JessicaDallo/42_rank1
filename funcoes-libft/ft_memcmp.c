/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:08:33 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/24 19:00:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// compara os primeiros n bytes da memoria apontada por dest e src
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
// 	char x[] = "abcc";
// 	char y[] = "abdd";
// 	printf("%d\n", ft_memcmp(x, y, 3));
// 	printf("%d\n", memcmp(x, y, 3));
// 	return (0);
// }