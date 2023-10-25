/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:27:21 by marvin            #+#    #+#             */
/*   Updated: 2023/10/24 19:13:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// size_t	ft_strlcpy(char *dst, const char *src, size_t size)
// {
// 	size_t	i;

// 	i = 0;
// 	if (!size)
// 		return (ft_strlen(src));
// 	while (src[i] && i < size - 1)
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	dst[i] = 0;
// 	return (ft_strlen(src));
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*sub;
// 	size_t	i;

// 	if (!s)
// 		return (NULL);
// 	if (start >= (unsigned int)ft_strlen(s))
// 		return (NULL);
// 	i = ft_strlen(s + start);
// 	if (i < len)
// 		len = i;
// 	sub = (char *)malloc(sizeof(char) * (len + 1));
// 	if (sub == 0)
// 		return (NULL);
// 	ft_strlcpy(sub, s + start, len + 1);
// 	return (sub);
// }

// int	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

// char	*ft_strchr(const char *str, int c)
// {
// 	while (*str && *str != (unsigned char)c)
// 	{
// 		str++;
// 	}
// 	if (*str == (unsigned char)c)
// 		return ((char *)str);
// 	return (NULL);
// }
static int	ft_count_words(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			i++;
		while (*s != c && *s)
			s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		j;
	int		i;

	str = (char **)malloc(sizeof(char *) * (ft_count_words (s, c) + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (*s)
	{
		if (*s != c && *s)
		{
			if (!ft_strchr(s, c))
				i = ft_strlen(s);
			else
				i = ft_strchr(s, c) - s;
			str[j++] = ft_substr(s, 0, i);
			s = s + i;
		}
		while (*s == c && *s)
			s++;
	}
	str[j] = NULL;
	return (str);
}
// int	main()
// {	
// 	int	i = 0;
// 	char	str[] = "jessica";
// 	char	c = 's';
// 	char	**split = ft_split(str, c);

// 	while (split[i] != 0)
// 	{
// 		printf("%s", split[i]);
// 		i++;
// 	}
// }