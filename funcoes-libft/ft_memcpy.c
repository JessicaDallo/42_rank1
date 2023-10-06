/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessicadallo <jessicadallo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:23:36 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/06 17:23:36 by jessicadall      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	//unsigned char	*d;
	//unsigned char	*s;

	i = 0;
	if(!dest || !src)
	{
		return (0);
	}
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// int	main()
// {
// 	char x[] = "jessica";
// 	printf("%d\n", ft_memcpy(x, "oculos", 5));
// 	printf("%d\n", memcpy(x, "oculos", 5));
// 	return (0);
// }