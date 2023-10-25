/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: jessicadallo <jessicadallo@student.42.f    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/10/06 17:23:57 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/06 17:23:57 by jessicadall      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//compara uma sring com a aoutra em determinado numero de caracteres
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// int	main (void)
// {
// 	char x[] = "jessica";
// 	char y[] = "jers4ca";
// 	printf("%d\n", ft_strncmp(x, y, 3));
// 	printf("%d\n", strncmp(x, y, 3));
// 	return (0);
// }