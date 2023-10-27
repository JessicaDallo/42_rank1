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