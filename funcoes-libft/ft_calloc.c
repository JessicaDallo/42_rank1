/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 08:09:17 by jesilva-          #+#    #+#             */
/*   Updated: 2023/10/24 18:50:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//a função aloca a quantidade de bytes ncessarias e faz a inicialização com a 
//função bzero que colca o valor zero em cada byte
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