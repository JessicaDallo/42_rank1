/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: jessicadallo <jessicadallo@student.42.f    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/10/06 17:23:40 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/06 17:23:40 by jessicadall      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	if (!dest && !src)
// 	{
// 		return (NULL);
// 	}
// 	while (i < n)
// 	{
// 		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
// 		i++;
// 	}
// 	return (dest);
// }

//copia origem para destino
void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	if (!str1 && !str2)
	{
		return (NULL);
	}
	if (str1 > str2)
	{
		while (n--)
		{
			((unsigned char *)str1)[n] = ((const char *)str2)[n];
		}
	}
	else if (str2 > str1)
		ft_memcpy(str1, str2, n);
	return (str1);
}
// int	main(void)
// {
// 	char orig[] = "jessica abcd";
// 	char dest[] = "12347878978";
// 	printf("%s\n", (char *)ft_memmove(dest, orig, 11));
// 	printf("%s\n", (char *)memmove(dest, orig, 11));
// 	return (0);
// }