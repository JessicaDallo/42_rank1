/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:07:47 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/24 16:44:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copia da str origem para a destino 
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}
// int main () {
// 	char dst[] = "abcabcabc";
// 	char src[] = "abcabc";
// 	printf ("%ld\n", ft_strlcpy(dst, src, 4));
// 	printf("%s\n", dst);
// 	printf ("%ld\n", strlcpy(dst, src, 4));
// 	printf("%s\n", dst);
// 	return (0);
// }