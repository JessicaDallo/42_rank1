/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <jesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 08:09:17 by jesilva-          #+#    #+#             */
/*   Updated: 2023/10/09 08:10:22 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*s;

	s = malloc(n * size);
	if (!s)
		return (NULL);
	ft_bzero (s, n * size);
	return (s);
}
// int main (void)
// {
// 	char *result;
// 	// char word[] = "jessica";
// 	result = ft_calloc(5, 5);
// 	printf("%s", result);
// }