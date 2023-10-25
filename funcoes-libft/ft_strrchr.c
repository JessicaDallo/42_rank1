/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:32:39 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/24 16:45:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//procura um char, na string toda e retorna a sring 
char	*ft_strrchr(const char *str, int c)
{
	char	*res;

	res = 0;
	while (*str)
	{
		if (*str == (char)c)
			res = (char *)str;
		str++;
	}
	if ((char)c == 0)
	{
		return ((char *)str);
	}
	return (res);
}
// int main () {
// 	char *ret;
// 	const char str[] = "jessica gosta de arroz";
// 	const char ch = 'g';
// 	ret = ft_strrchr(str, ch);
// 	printf ("%s\n", ret);
// 	ret = strrchr(str, ch);
// 	printf ("%s\n", ret);
// 	return (0);
// }