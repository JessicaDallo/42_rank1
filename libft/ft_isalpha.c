/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: jessicadallo <jessicadallo@student.42.f    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/10/06 17:23:14 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/06 17:23:14 by jessicadall      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//verifica se é o item passado está entre a e z
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
// int	main(void)
// {
// 	int x = '1';
// 	printf("%d\n", ft_isalpha(x));
// 	printf("%d\n", isalpha(x));
// 	return (0);
// }
