/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: jessicadallo <jessicadallo@student.42.f    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/10/06 17:24:01 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/06 17:24:01 by jessicadall      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//muda para letra minuscula 
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}
// int	main(void)
// {
// 	char x = 'S';
// 	printf("%c\n", ft_tolower(x));
// 	printf("%c\n", tolower(x));
// 	return (0);
// }