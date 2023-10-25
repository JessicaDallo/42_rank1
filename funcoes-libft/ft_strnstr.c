/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:54:46 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/24 19:02:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

// int	ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	unsigned int	i;

// 	i = 0;
// 	if (n == 0)
// 	{
// 		return (0);
// 	}
// 	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
// 	{
// 		i++;
// 	}
// 	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
// }

//procura um char em uma string, em uma quantidade x de 
//caracteres se encontrar retorna uma string do caracter para frente 
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = ft_strlen(little);
	if (*little == 0)
		return ((char *)big);
	while (*big && i <= len)
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
// 	char x[] = "jessica";
// 	char y[] = "ss";
// 	printf("%s\n", (char *)ft_strnstr(x, y, 4));
// 	return (0);
// }