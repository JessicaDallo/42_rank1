/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessicadallo <jessicadallo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:54:46 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/08 08:01:10 by jessicadall      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = ft_strlen(little);
	if (*little == 0 && !big)
		return (0);
	if (little[0] == '\0')
		return ((char *)big);
	while (*big && i < len)
	{
		if (*big == *little && ft_strncmp(big, little, i) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
// int	main (void)
// {
// 	char x[] = "jessica gosta de arroz";
// 	char y[] = "ca";
// 	printf("%s\n", (char *)ft_strnstr(x, y, 15));
// 	return (0);
// }