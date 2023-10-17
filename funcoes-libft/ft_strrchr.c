/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <jesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:32:39 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/17 07:38:09 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

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
// 	const char str[] = "arnaldo gosta de arroz";
// 	const char ch = 'v';
// 	ret = ft_strrchr(str, ch);
// 	printf ("%s\n", ret);
// 	ret = strrchr(str, ch);
// 	printf ("%s\n", ret);
// 	return (0);
// }