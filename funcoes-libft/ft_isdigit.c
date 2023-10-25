/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: jessicadallo <jessicadallo@student.42.f    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/10/06 17:23:26 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/06 17:23:26 by jessicadall      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//verifica se é um valor numérico
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	int x = 'a';
	printf("%d\n", ft_isdigit(x));
	printf("%d\n", isdigit(x));
	return (0);
}*/