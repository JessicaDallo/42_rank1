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
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	char	*s;

	s = (char *)str;
	while (*s)
	{
		if (*s == (unsigned char)c)
			return (s);
		s++;
	}
	if (c == 0)
		return (s);
	return (NULL);
}

// int main () {
// 	const char str[] = "jessica";
// 	const char ch = 'n';
// 	printf ("%s\n", ft_strchr(str, ch));
// 	printf ("%s\n", strchr(str, ch));
// 	return (0);
// }