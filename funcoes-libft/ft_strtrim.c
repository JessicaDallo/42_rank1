/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 23:23:50 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/24 16:45:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copia uma parte da string denominada de comeco e fim,
	//fazndo o maloc para uma nova string para ter o valor correto de bytes

#include "libft.h"

// int	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

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

// char	*ft_strdup(const char *s)
// {
// 	char	*str;
// 	size_t	i;

// 	i = 0;
// 	str = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
// 	if (str == NULL)
// 		return (NULL);
// 	while (s[i] != '\0')
// 	{
// 		str[i] = s[i];
// 		i++;
// 	}
// str[i] = 0;
// 	return (str);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*sub;
// 	size_t	i;

// 	if (!s)
// 		return (NULL);
// 	if (start >= (unsigned int)ft_strlen(s))
// 		return (ft_strdup(""));
// 	i = ft_strlen(s + start);
// 	if (i < len)
// 		len = i;
// 	sub = (char *)malloc(sizeof(char) * (len + 1));
// if (sub == 0)
// 		return (0);
// ft_strlcpy(sub, s + start, len + 1);
// 	return (sub);
// }

// char	*ft_strchr(const char *str, int c)
// {
// 	char	*s;

// 	s = (char *)str;
// 	while (*s)
// 	{
// 		if (*s == (unsigned char)c)
// 			return (s);
// 		s++;
// 	}
// 	if (c == 0)
// 		return (s);
// 	return (NULL);
// }

//corta o caractere desejado do inicio e do fim sa string 
char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*s3;

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1) - 1;
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	s3 = ft_substr(s1, start, end - start + 1);
	return (s3);
}

// int	main (void)
// {
// 	char x[] = " 123456 ";
// 	char y[] = " ";
// 	printf("%s\n", ft_strtrim(x, y));
// 	return (0);
// }