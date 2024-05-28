/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: jessicadallo <jessicadallo@student.42.f    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/10/06 17:23:21 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/06 17:23:21 by jessicadall      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//verifica se o valor passado está dentro da tabela ascii
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	int x = '1';
// 	printf("%d\n", ft_isascii(x));
// 	printf("%d\n", isascii(x));
// 	return (0);
// }
