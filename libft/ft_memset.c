/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: jessicadallo <jessicadallo@student.42.f    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/10/06 17:23:45 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/06 17:23:45 by jessicadall      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// preenche uma string com um caractere
void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = str;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
/*int	main(void)
{
	char x[50];
		int	s = '%';
	printf("%s\n", (char *)ft_memset(x, s, 7));
	printf("%s\n", (char *)ft_memset(x, s, 7));
	return (0);
}*/