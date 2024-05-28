/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: jessicadallo <jessicadallo@student.42.f    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/10/06 17:23:49 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/06 17:23:49 by jessicadall      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// retorna a string apartir do char desejado
char	*ft_strchr(const char *str, int c)
{
	while (*str && *str != (unsigned char)c)
	{
		str++;
	}
	if (*str == (unsigned char)c)
		return ((char *)str);
	return (NULL);
}

// int main () {
// 	const char str[] = "jessica";
// 	const char ch = 'i';
// 	printf ("%s\n", ft_strchr(str, ch));
// 	printf ("%s\n", strchr(str, ch));
// 	return (0);
// }
