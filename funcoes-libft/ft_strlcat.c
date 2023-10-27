/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:29:22 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/24 18:59:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//usada para juntar e contar o tamanho da string 
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;
	size_t	i;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	i = 0;
	if (!dst && !src)
	{
		return (0);
	}
	if (size == 0 || size <= dlen)
	{
		return (size + slen);
	}
	while (src[i] != '\0' && (i + dlen) < size - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = 0;
	return (slen + dlen);
}
// int main () 
// {
// 	char *dst = "jessica";
// 	char *src = "jessica";
// 	printf ("%d\n", ft_strlcat(dst, src, 7));
// 	printf ("%d\n", strlcat*dst, src, 5));
// 	return (0);
// }