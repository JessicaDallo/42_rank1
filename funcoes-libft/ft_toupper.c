/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: jessicadallo <jessicadallo@student.42.f    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/10/06 17:24:05 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/06 17:24:05 by jessicadall      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//muda para letra minuscula
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

// int	main(void)
// {
// 	char x = 'z';
// 	printf("%c\n", ft_toupper(x));
// 	printf("%c\n", toupper(x));
// 	return (0);
// }