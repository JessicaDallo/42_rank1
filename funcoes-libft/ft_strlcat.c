/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessicadallo <jessicadallo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:29:22 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/08 18:30:22 by jessicadall      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

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
// int main () {
// 	char*dst[] = "jessica";
// 	char src[] = "jessica";
// 	printf ("%ld\n", ft_strlcat*dst, src, 5));
// 	printf ("%d\n", strlcat*dst, src, 7));
// 	return (0);
// }